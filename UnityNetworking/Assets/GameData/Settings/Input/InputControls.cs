// GENERATED AUTOMATICALLY FROM 'Assets/GameData/Settings/Input/InputControls.inputactions'

using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Utilities;

public class @InputControls : IInputActionCollection, IDisposable
{
    public InputActionAsset asset { get; }
    public @InputControls()
    {
        asset = InputActionAsset.FromJson(@"{
    ""name"": ""InputControls"",
    ""maps"": [
        {
            ""name"": ""DevDefault"",
            ""id"": ""954cca68-e82f-4319-933d-8d0193a36685"",
            ""actions"": [
                {
                    ""name"": ""Horizontal"",
                    ""type"": ""Button"",
                    ""id"": ""22090b2d-fd3d-4cfc-af8a-2c1a3ee34d0b"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""Vertical"",
                    ""type"": ""Button"",
                    ""id"": ""8975883b-900a-4300-88c7-eb3c1150eee3"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""Jump"",
                    ""type"": ""Button"",
                    ""id"": ""5d8e9cb2-ba21-4d07-9caf-3f0d6050c7ae"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""Fire"",
                    ""type"": ""Button"",
                    ""id"": ""086f5de6-11ba-432a-b144-4e41384e2880"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                },
                {
                    ""name"": ""Look"",
                    ""type"": ""Button"",
                    ""id"": ""63a76eb8-6539-44b5-b947-01fe5f801cbe"",
                    ""expectedControlType"": ""Button"",
                    ""processors"": """",
                    ""interactions"": """"
                }
            ],
            ""bindings"": [
                {
                    ""name"": ""1D Axis"",
                    ""id"": ""67cddd63-0151-4785-a277-67136770ecc9"",
                    ""path"": ""1DAxis"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Horizontal"",
                    ""isComposite"": true,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": ""negative"",
                    ""id"": ""f34b39d1-df07-4ef9-a2ce-3cd39cff3cbc"",
                    ""path"": ""<Keyboard>/a"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""KBM"",
                    ""action"": ""Horizontal"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""positive"",
                    ""id"": ""5ced62a3-9344-439c-af88-92674313a9a3"",
                    ""path"": ""<Keyboard>/d"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""KBM"",
                    ""action"": ""Horizontal"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""1D Axis"",
                    ""id"": ""e37c9a93-26ab-4d5f-a616-df45fe37db52"",
                    ""path"": ""1DAxis"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": """",
                    ""action"": ""Vertical"",
                    ""isComposite"": true,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": ""positive"",
                    ""id"": ""c8ab48a6-d4ec-46c8-b9d0-fa94a08cb939"",
                    ""path"": ""<Keyboard>/w"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""KBM"",
                    ""action"": ""Vertical"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""negative"",
                    ""id"": ""f1819f23-d2e8-4cae-abc6-0aba2ed90bf0"",
                    ""path"": ""<Keyboard>/s"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""KBM"",
                    ""action"": ""Vertical"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": """",
                    ""id"": ""2ef5de58-8675-489c-b00c-267f758e30f5"",
                    ""path"": ""<Keyboard>/space"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""KBM"",
                    ""action"": ""Jump"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""709aeec1-2780-4783-a9e6-d6bd8412ed5c"",
                    ""path"": ""<Mouse>/leftButton"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""KBM"",
                    ""action"": ""Fire"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": """",
                    ""id"": ""efadbda6-fa3d-4091-9d07-ae4f98327163"",
                    ""path"": ""<Keyboard>/leftCtrl"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""KBM"",
                    ""action"": ""Fire"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": ""2D Vector"",
                    ""id"": ""842f6c9d-84bd-4eb9-a00e-313b03bd8d97"",
                    ""path"": ""2DVector(mode=2)"",
                    ""interactions"": """",
                    ""processors"": ""Scale(factor=0.2)"",
                    ""groups"": """",
                    ""action"": ""Look"",
                    ""isComposite"": true,
                    ""isPartOfComposite"": false
                },
                {
                    ""name"": ""up"",
                    ""id"": ""c71f06a8-2a67-4e40-9bfd-08a021e0e354"",
                    ""path"": ""<Mouse>/delta/y"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""KBM"",
                    ""action"": ""Look"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""down"",
                    ""id"": ""1de3ae84-7f3c-4ce2-8e2e-31fd5ca32cc1"",
                    ""path"": ""<Mouse>/delta/y"",
                    ""interactions"": """",
                    ""processors"": ""Invert"",
                    ""groups"": ""KBM"",
                    ""action"": ""Look"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""left"",
                    ""id"": ""a0bece5b-fdc9-481c-9fcd-3d969757d381"",
                    ""path"": ""<Mouse>/delta/x"",
                    ""interactions"": """",
                    ""processors"": ""Invert"",
                    ""groups"": ""KBM"",
                    ""action"": ""Look"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                },
                {
                    ""name"": ""right"",
                    ""id"": ""a94268c7-0f08-452c-aabe-72f6c6280015"",
                    ""path"": ""<Mouse>/delta/x"",
                    ""interactions"": """",
                    ""processors"": """",
                    ""groups"": ""KBM"",
                    ""action"": ""Look"",
                    ""isComposite"": false,
                    ""isPartOfComposite"": true
                }
            ]
        }
    ],
    ""controlSchemes"": [
        {
            ""name"": ""KBM"",
            ""bindingGroup"": ""KBM"",
            ""devices"": [
                {
                    ""devicePath"": ""<Keyboard>"",
                    ""isOptional"": false,
                    ""isOR"": false
                },
                {
                    ""devicePath"": ""<Mouse>"",
                    ""isOptional"": false,
                    ""isOR"": false
                }
            ]
        }
    ]
}");
        // DevDefault
        m_DevDefault = asset.FindActionMap("DevDefault", throwIfNotFound: true);
        m_DevDefault_Horizontal = m_DevDefault.FindAction("Horizontal", throwIfNotFound: true);
        m_DevDefault_Vertical = m_DevDefault.FindAction("Vertical", throwIfNotFound: true);
        m_DevDefault_Jump = m_DevDefault.FindAction("Jump", throwIfNotFound: true);
        m_DevDefault_Fire = m_DevDefault.FindAction("Fire", throwIfNotFound: true);
        m_DevDefault_Look = m_DevDefault.FindAction("Look", throwIfNotFound: true);
    }

    public void Dispose()
    {
        UnityEngine.Object.Destroy(asset);
    }

    public InputBinding? bindingMask
    {
        get => asset.bindingMask;
        set => asset.bindingMask = value;
    }

    public ReadOnlyArray<InputDevice>? devices
    {
        get => asset.devices;
        set => asset.devices = value;
    }

    public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;

    public bool Contains(InputAction action)
    {
        return asset.Contains(action);
    }

    public IEnumerator<InputAction> GetEnumerator()
    {
        return asset.GetEnumerator();
    }

    IEnumerator IEnumerable.GetEnumerator()
    {
        return GetEnumerator();
    }

    public void Enable()
    {
        asset.Enable();
    }

    public void Disable()
    {
        asset.Disable();
    }

    // DevDefault
    private readonly InputActionMap m_DevDefault;
    private IDevDefaultActions m_DevDefaultActionsCallbackInterface;
    private readonly InputAction m_DevDefault_Horizontal;
    private readonly InputAction m_DevDefault_Vertical;
    private readonly InputAction m_DevDefault_Jump;
    private readonly InputAction m_DevDefault_Fire;
    private readonly InputAction m_DevDefault_Look;
    public struct DevDefaultActions
    {
        private @InputControls m_Wrapper;
        public DevDefaultActions(@InputControls wrapper) { m_Wrapper = wrapper; }
        public InputAction @Horizontal => m_Wrapper.m_DevDefault_Horizontal;
        public InputAction @Vertical => m_Wrapper.m_DevDefault_Vertical;
        public InputAction @Jump => m_Wrapper.m_DevDefault_Jump;
        public InputAction @Fire => m_Wrapper.m_DevDefault_Fire;
        public InputAction @Look => m_Wrapper.m_DevDefault_Look;
        public InputActionMap Get() { return m_Wrapper.m_DevDefault; }
        public void Enable() { Get().Enable(); }
        public void Disable() { Get().Disable(); }
        public bool enabled => Get().enabled;
        public static implicit operator InputActionMap(DevDefaultActions set) { return set.Get(); }
        public void SetCallbacks(IDevDefaultActions instance)
        {
            if (m_Wrapper.m_DevDefaultActionsCallbackInterface != null)
            {
                @Horizontal.started -= m_Wrapper.m_DevDefaultActionsCallbackInterface.OnHorizontal;
                @Horizontal.performed -= m_Wrapper.m_DevDefaultActionsCallbackInterface.OnHorizontal;
                @Horizontal.canceled -= m_Wrapper.m_DevDefaultActionsCallbackInterface.OnHorizontal;
                @Vertical.started -= m_Wrapper.m_DevDefaultActionsCallbackInterface.OnVertical;
                @Vertical.performed -= m_Wrapper.m_DevDefaultActionsCallbackInterface.OnVertical;
                @Vertical.canceled -= m_Wrapper.m_DevDefaultActionsCallbackInterface.OnVertical;
                @Jump.started -= m_Wrapper.m_DevDefaultActionsCallbackInterface.OnJump;
                @Jump.performed -= m_Wrapper.m_DevDefaultActionsCallbackInterface.OnJump;
                @Jump.canceled -= m_Wrapper.m_DevDefaultActionsCallbackInterface.OnJump;
                @Fire.started -= m_Wrapper.m_DevDefaultActionsCallbackInterface.OnFire;
                @Fire.performed -= m_Wrapper.m_DevDefaultActionsCallbackInterface.OnFire;
                @Fire.canceled -= m_Wrapper.m_DevDefaultActionsCallbackInterface.OnFire;
                @Look.started -= m_Wrapper.m_DevDefaultActionsCallbackInterface.OnLook;
                @Look.performed -= m_Wrapper.m_DevDefaultActionsCallbackInterface.OnLook;
                @Look.canceled -= m_Wrapper.m_DevDefaultActionsCallbackInterface.OnLook;
            }
            m_Wrapper.m_DevDefaultActionsCallbackInterface = instance;
            if (instance != null)
            {
                @Horizontal.started += instance.OnHorizontal;
                @Horizontal.performed += instance.OnHorizontal;
                @Horizontal.canceled += instance.OnHorizontal;
                @Vertical.started += instance.OnVertical;
                @Vertical.performed += instance.OnVertical;
                @Vertical.canceled += instance.OnVertical;
                @Jump.started += instance.OnJump;
                @Jump.performed += instance.OnJump;
                @Jump.canceled += instance.OnJump;
                @Fire.started += instance.OnFire;
                @Fire.performed += instance.OnFire;
                @Fire.canceled += instance.OnFire;
                @Look.started += instance.OnLook;
                @Look.performed += instance.OnLook;
                @Look.canceled += instance.OnLook;
            }
        }
    }
    public DevDefaultActions @DevDefault => new DevDefaultActions(this);
    private int m_KBMSchemeIndex = -1;
    public InputControlScheme KBMScheme
    {
        get
        {
            if (m_KBMSchemeIndex == -1) m_KBMSchemeIndex = asset.FindControlSchemeIndex("KBM");
            return asset.controlSchemes[m_KBMSchemeIndex];
        }
    }
    public interface IDevDefaultActions
    {
        void OnHorizontal(InputAction.CallbackContext context);
        void OnVertical(InputAction.CallbackContext context);
        void OnJump(InputAction.CallbackContext context);
        void OnFire(InputAction.CallbackContext context);
        void OnLook(InputAction.CallbackContext context);
    }
}

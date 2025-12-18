#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/Input/OpenXRInput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRInput)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature_ActionBinding;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature_ActionMapConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
struct OpenXRInteractionFeature_ActionType;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature_DeviceConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature;
}
namespace UnityEngine::XR::OpenXR::Input {
struct OpenXRInput_GetInternalDeviceIdCommand;
}
namespace UnityEngine::XR::OpenXR::Input {
struct OpenXRInput_InputSourceNameFlags;
}
namespace UnityEngine::XR::OpenXR::Input {
struct OpenXRInput_SerializedBinding;
}
namespace UnityEngine::XR::OpenXR::Input {
struct OpenXRInput_SerializedGuid;
}
namespace UnityEngine::XR::OpenXR::Input {
class OpenXRInput___c;
}
namespace UnityEngine::XR {
struct InputDeviceCharacteristics;
}
namespace UnityEngine::XR {
struct InputDevice;
}
namespace UnityEngine::XR {
struct InputFeatureUsage;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Input {
struct OpenXRInput_InputSourceNameFlags;
}
namespace UnityEngine::XR::OpenXR::Input {
class OpenXRInput;
}
namespace UnityEngine::XR::OpenXR::Input {
class OpenXRInput___c;
}
namespace UnityEngine::XR::OpenXR::Input {
struct OpenXRInput_GetInternalDeviceIdCommand;
}
namespace UnityEngine::XR::OpenXR::Input {
struct OpenXRInput_SerializedBinding;
}
namespace UnityEngine::XR::OpenXR::Input {
struct OpenXRInput_SerializedGuid;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Input::OpenXRInput);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Input::OpenXRInput___c);
MARK_VAL_T(::UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand);
MARK_VAL_T(::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedBinding);
MARK_VAL_T(::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid);
// Dependencies System.Guid
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Input.OpenXRInput/SerializedGuid
struct CORDL_TYPE OpenXRInput_SerializedGuid {
public:
  // Declarations
  /// @brief Field guid, offset 0x0, size 0x10
  __declspec(property(get = __cordl_internal_get_guid, put = __cordl_internal_set_guid)) ::System::Guid guid;

  /// @brief Field ulong1, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_ulong1, put = __cordl_internal_set_ulong1)) uint64_t ulong1;

  /// @brief Field ulong2, offset 0x8, size 0x8
  __declspec(property(get = __cordl_internal_get_ulong2, put = __cordl_internal_set_ulong2)) uint64_t ulong2;

  constexpr ::System::Guid const& __cordl_internal_get_guid() const;

  constexpr ::System::Guid& __cordl_internal_get_guid();

  constexpr uint64_t const& __cordl_internal_get_ulong1() const;

  constexpr uint64_t& __cordl_internal_get_ulong1();

  constexpr uint64_t const& __cordl_internal_get_ulong2() const;

  constexpr uint64_t& __cordl_internal_get_ulong2();

  constexpr void __cordl_internal_set_guid(::System::Guid value);

  constexpr void __cordl_internal_set_ulong1(uint64_t value);

  constexpr void __cordl_internal_set_ulong2(uint64_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRInput_SerializedGuid();

  // Ctor Parameters [CppParam { name: "guid", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "ulong1", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name:
  // "ulong2", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OpenXRInput_SerializedGuid(::System::Guid guid, uint64_t ulong1, uint64_t ulong2) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___guid_padding[0x0];
      /// @brief Field guid, offset: 0x0, size: 0x10, def value: None
      ::System::Guid ___guid;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___guid_padding_forAlignment[0x0];
      /// @brief Field guid, offset: 0x0, size: 0x10, def value: None
      ::System::Guid ___guid_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___ulong1_padding[0x0];
      /// @brief Field ulong1, offset: 0x0, size: 0x8, def value: None
      uint64_t ___ulong1;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___ulong1_padding_forAlignment[0x0];
      /// @brief Field ulong1, offset: 0x0, size: 0x8, def value: None
      uint64_t ___ulong1_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___ulong2_padding[0x8];
      /// @brief Field ulong2, offset: 0x8, size: 0x8, def value: None
      uint64_t ___ulong2;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___ulong2_padding_forAlignment[0x8];
      /// @brief Field ulong2, offset: 0x8, size: 0x8, def value: None
      uint64_t ___ulong2_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18510 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Input
// Dependencies
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Input.OpenXRInput/SerializedBinding
struct CORDL_TYPE OpenXRInput_SerializedBinding {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRInput_SerializedBinding();

  // Ctor Parameters [CppParam { name: "actionId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr OpenXRInput_SerializedBinding(uint64_t actionId, ::StringW path) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18511 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field actionId, offset: 0x0, size: 0x8, def value: None
  uint64_t actionId;

  /// @brief Field path, offset: 0x8, size: 0x8, def value: None
  ::StringW path;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedBinding, actionId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedBinding, path) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedBinding, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Input
// Dependencies
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Input.OpenXRInput/InputSourceNameFlags
struct CORDL_TYPE OpenXRInput_InputSourceNameFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OpenXRInput_InputSourceNameFlags_Unwrapped
  enum struct __OpenXRInput_InputSourceNameFlags_Unwrapped : int32_t {
    __E_UserPath = static_cast<int32_t>(0x1),
    __E_InteractionProfile = static_cast<int32_t>(0x2),
    __E_Component = static_cast<int32_t>(0x4),
    __E_All = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OpenXRInput_InputSourceNameFlags_Unwrapped() const noexcept {
    return static_cast<__OpenXRInput_InputSourceNameFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRInput_InputSourceNameFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OpenXRInput_InputSourceNameFlags(int32_t value__) noexcept;

  /// @brief Field All value: I32(7)
  static ::UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags const All;

  /// @brief Field Component value: I32(4)
  static ::UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags const Component;

  /// @brief Field InteractionProfile value: I32(2)
  static ::UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags const InteractionProfile;

  /// @brief Field UserPath value: I32(1)
  static ::UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags const UserPath;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18512 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Input
// Dependencies UnityEngine.InputSystem.LowLevel.InputDeviceCommand
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.Input.OpenXRInput/GetInternalDeviceIdCommand
#pragma pack(push, 0)
struct CORDL_TYPE OpenXRInput_GetInternalDeviceIdCommand {
public:
  // Declarations
  /// @brief Field baseCommand, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_baseCommand, put = __cordl_internal_set_baseCommand)) ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand;

  /// @brief Field deviceId, offset 0x8, size 0x4
  __declspec(property(get = __cordl_internal_get_deviceId, put = __cordl_internal_set_deviceId)) uint32_t deviceId;

  __declspec(property(get = get_typeStatic)) ::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*();

  /// @brief Method Create, addr 0x6829c60, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand Create();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __cordl_internal_get_baseCommand() const;

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __cordl_internal_get_baseCommand();

  constexpr uint32_t const& __cordl_internal_get_deviceId() const;

  constexpr uint32_t& __cordl_internal_get_deviceId();

  constexpr void __cordl_internal_set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value);

  constexpr void __cordl_internal_set_deviceId(uint32_t value);

  /// @brief Method get_Type, addr 0x682a398, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type();

  /// @brief Method get_typeStatic, addr 0x682a3a4, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo* i___UnityEngine__InputSystem__LowLevel__IInputDeviceCommandInfo();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRInput_GetInternalDeviceIdCommand();

  // Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "deviceId", ty: "uint32_t",
  // modifiers: "", def_value: None }]
  constexpr OpenXRInput_GetInternalDeviceIdCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, uint32_t deviceId) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___baseCommand_padding[0x0];
      /// @brief Field baseCommand, offset: 0x0, size: 0x8, def value: None
      ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand ___baseCommand;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___baseCommand_padding_forAlignment[0x0];
      /// @brief Field baseCommand, offset: 0x0, size: 0x8, def value: None
      ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand ___baseCommand_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___deviceId_padding[0x8];
      /// @brief Field deviceId, offset: 0x8, size: 0x4, def value: None
      uint32_t ___deviceId;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___deviceId_padding_forAlignment[0x8];
      /// @brief Field deviceId, offset: 0x8, size: 0x4, def value: None
      uint32_t ___deviceId_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18513 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field k_BaseCommandSizeSize offset 0xffffffff size 0x4
  static constexpr int32_t k_BaseCommandSizeSize{ static_cast<int32_t>(0x8) };

  /// @brief Field k_Size offset 0xffffffff size 0x4
  static constexpr int32_t k_Size{ static_cast<int32_t>(0xc) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand, 0xc>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Input
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Input.OpenXRInput/<>c
class CORDL_TYPE OpenXRInput___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c* __9;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0)) ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*, ::StringW>* __9__11_0;

  /// @brief Field <>9__11_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_1, put = setStaticF___9__11_1)) ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, bool>* __9__11_1;

  /// @brief Field <>9__11_2, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF___9__11_2,
      put = setStaticF___9__11_2)) ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>* __9__11_2;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0)) ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>, bool>* __9__9_0;

  /// @brief Field <>9__9_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__9_1, put = setStaticF___9__9_1)) ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>, bool>* __9__9_1;

  static inline ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c* New_ctor();

  /// @brief Method <AttachActionSets>b__9_0, addr 0x682a408, size 0x48, virtual false, abstract: false, final false
  inline bool _AttachActionSets_b__9_0(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature* f);

  /// @brief Method <AttachActionSets>b__9_1, addr 0x682a450, size 0x40, virtual false, abstract: false, final false
  inline bool _AttachActionSets_b__9_1(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature* f);

  /// @brief Method <CreateActions>b__11_0, addr 0x682a490, size 0x14, virtual false, abstract: false, final false
  inline ::StringW _CreateActions_b__11_0(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig* d);

  /// @brief Method <CreateActions>b__11_1, addr 0x682a4a4, size 0x1c, virtual false, abstract: false, final false
  inline bool _CreateActions_b__11_1(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding* b);

  /// @brief Method <CreateActions>b__11_2, addr 0x682a4c0, size 0x14, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* _CreateActions_b__11_2(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding* b);

  /// @brief Method .ctor, addr 0x682a404, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*, ::StringW>* getStaticF___9__11_0();

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, bool>* getStaticF___9__11_1();

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>* getStaticF___9__11_2();

  static inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>, bool>* getStaticF___9__9_0();

  static inline ::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>, bool>* getStaticF___9__9_1();

  static inline void setStaticF___9(::UnityEngine::XR::OpenXR::Input::OpenXRInput___c* value);

  static inline void setStaticF___9__11_0(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_DeviceConfig*, ::StringW>* value);

  static inline void setStaticF___9__11_1(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, bool>* value);

  static inline void
  setStaticF___9__11_2(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionBinding*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>* value);

  static inline void setStaticF___9__9_0(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>, bool>* value);

  static inline void setStaticF___9__9_1(::System::Func_2<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRInput___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRInput___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRInput___c(OpenXRInput___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRInput___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRInput___c(OpenXRInput___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18514 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Input::OpenXRInput___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Input
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.Input.OpenXRInput
class CORDL_TYPE OpenXRInput : public ::System::Object {
public:
  // Declarations
  using GetInternalDeviceIdCommand = ::UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand;

  using InputSourceNameFlags = ::UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags;

  using SerializedBinding = ::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedBinding;

  using SerializedGuid = ::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid;

  using __c = ::UnityEngine::XR::OpenXR::Input::OpenXRInput___c;

  /// @brief Field ExpectedControlTypeToActionType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ExpectedControlTypeToActionType, put = setStaticF_ExpectedControlTypeToActionType)) ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType>* ExpectedControlTypeToActionType;

  /// @brief Field kVirtualControlMap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_kVirtualControlMap, put = setStaticF_kVirtualControlMap)) ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* kVirtualControlMap;

  /// @brief Method AttachActionSets, addr 0x6821140, size 0xc18, virtual false, abstract: false, final false
  static inline void AttachActionSets();

  /// @brief Method CreateActions, addr 0x6826da4, size 0xa28, virtual false, abstract: false, final false
  static inline bool
  CreateActions(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>* actionMaps,
                ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedBinding>*>* interactionProfiles);

  /// @brief Method GetActionHandle, addr 0x6829ab0, size 0x70, virtual false, abstract: false, final false
  static inline uint64_t GetActionHandle(::UnityEngine::XR::InputDevice device, ::UnityEngine::XR::InputFeatureUsage usage);

  /// @brief Method GetActionHandle, addr 0x6829a0c, size 0xa4, virtual false, abstract: false, final false
  static inline uint64_t GetActionHandle(::UnityEngine::XR::InputDevice device, ::StringW usageName);

  /// @brief Method GetActionHandle, addr 0x68287f4, size 0x228, virtual false, abstract: false, final false
  static inline uint64_t GetActionHandle(::UnityEngine::InputSystem::InputAction* inputAction, ::UnityEngine::InputSystem::InputDevice* inputDevice);

  /// @brief Method GetActionHandleName, addr 0x6828468, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW GetActionHandleName(::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method GetActionIsActive, addr 0x6829534, size 0x70, virtual false, abstract: false, final false
  static inline bool GetActionIsActive(::UnityEngine::XR::InputDevice device, ::UnityEngine::XR::InputFeatureUsage usage);

  /// @brief Method GetActionIsActive, addr 0x68295a4, size 0xa0, virtual false, abstract: false, final false
  static inline bool GetActionIsActive(::UnityEngine::XR::InputDevice device, ::StringW usageName);

  /// @brief Method GetActionIsActive, addr 0x68292d4, size 0x1b8, virtual false, abstract: false, final false
  static inline bool GetActionIsActive(::UnityEngine::InputSystem::InputAction* inputAction);

  /// @brief Method GetDeviceId, addr 0x6828a1c, size 0xb0, virtual false, abstract: false, final false
  static inline uint32_t GetDeviceId(::UnityEngine::InputSystem::InputDevice* inputDevice);

  /// @brief Method GetDeviceId, addr 0x6828dd4, size 0xb8, virtual false, abstract: false, final false
  static inline uint32_t GetDeviceId(::UnityEngine::XR::InputDevice inputDevice);

  /// @brief Method Internal_AttachActionSets, addr 0x6827a50, size 0x60, virtual false, abstract: false, final false
  static inline bool Internal_AttachActionSets();

  /// @brief Method Internal_CreateAction, addr 0x682807c, size 0x260, virtual false, abstract: false, final false
  static inline uint64_t Internal_CreateAction(uint64_t actionSetId, ::StringW name, ::StringW localizedName, uint32_t actionType, ::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid guid,
                                               ::ArrayW<::StringW, ::Array<::StringW>*> userPaths, uint32_t userPathCount, bool isAdditive, ::ArrayW<::StringW, ::Array<::StringW>*> usages,
                                               uint32_t usageCount);

  /// @brief Method Internal_CreateActionSet, addr 0x6827fb0, size 0xcc, virtual false, abstract: false, final false
  static inline uint64_t Internal_CreateActionSet(::StringW name, ::StringW localizedName, ::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid guid);

  /// @brief Method Internal_GetActionId, addr 0x6829bbc, size 0xa4, virtual false, abstract: false, final false
  static inline uint64_t Internal_GetActionId(uint32_t deviceId, ::StringW name);

  /// @brief Method Internal_GetActionIdNoISX, addr 0x6829b20, size 0x9c, virtual false, abstract: false, final false
  static inline uint64_t Internal_GetActionIdNoISX(uint32_t deviceId, ::StringW usageName);

  /// @brief Method Internal_GetActionIsActive, addr 0x682948c, size 0xa8, virtual false, abstract: false, final false
  static inline bool Internal_GetActionIsActive(uint32_t deviceId, ::StringW name);

  /// @brief Method Internal_GetActionIsActiveNoISX, addr 0x6829644, size 0xa0, virtual false, abstract: false, final false
  static inline bool Internal_GetActionIsActiveNoISX(uint32_t deviceId, ::StringW name);

  /// @brief Method Internal_GetDeviceId, addr 0x6829c74, size 0x9c, virtual false, abstract: false, final false
  static inline uint32_t Internal_GetDeviceId(::UnityEngine::XR::InputDeviceCharacteristics characteristics, ::StringW name);

  /// @brief Method Internal_RegisterDeviceDefinition, addr 0x6827cb8, size 0x13c, virtual false, abstract: false, final false
  static inline uint64_t Internal_RegisterDeviceDefinition(::StringW userPath, ::StringW interactionProfile, bool isAdditive, uint32_t characteristics, ::StringW name, ::StringW manufacturer,
                                                           ::StringW serialNumber);

  /// @brief Method Internal_SendHapticImpulse, addr 0x6828acc, size 0xac, virtual false, abstract: false, final false
  static inline void Internal_SendHapticImpulse(uint32_t deviceId, uint64_t actionId, float_t amplitude, float_t frequency, float_t duration);

  /// @brief Method Internal_SendHapticImpulseNoISX, addr 0x6828e8c, size 0xa4, virtual false, abstract: false, final false
  static inline void Internal_SendHapticImpulseNoISX(uint32_t deviceId, float_t amplitude, float_t frequency, float_t duration);

  /// @brief Method Internal_SetDpadBindingCustomValues, addr 0x68282dc, size 0xb4, virtual false, abstract: false, final false
  static inline void Internal_SetDpadBindingCustomValues(bool isLeft, float_t forceThreshold, float_t forceThresholdReleased, float_t centerRegion, float_t wedgeAngle, bool isSticky);

  /// @brief Method Internal_StopHaptics, addr 0x6829064, size 0x84, virtual false, abstract: false, final false
  static inline void Internal_StopHaptics(uint32_t deviceId, uint64_t actionId);

  /// @brief Method Internal_StopHapticsNoISX, addr 0x6828fe8, size 0x7c, virtual false, abstract: false, final false
  static inline void Internal_StopHapticsNoISX(uint32_t deviceId);

  /// @brief Method Internal_SuggestBindings, addr 0x6827900, size 0x150, virtual false, abstract: false, final false
  static inline bool
  Internal_SuggestBindings(::StringW interactionProfile,
                           ::ArrayW<::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedBinding, ::Array<::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedBinding>*> serializedBindings,
                           uint32_t serializedBindingCount);

  /// @brief Method Internal_TryGetInputSourceName, addr 0x68291d4, size 0x100, virtual false, abstract: false, final false
  static inline bool Internal_TryGetInputSourceName(uint32_t deviceId, uint64_t actionId, uint32_t index, uint32_t flags, ::ByRef<::StringW> outName);

  /// @brief Method Internal_TryGetInputSourceNamePtr, addr 0x6829d10, size 0xac, virtual false, abstract: false, final false
  static inline bool Internal_TryGetInputSourceNamePtr(uint32_t deviceId, uint64_t actionId, uint32_t index, uint32_t flags, ::ByRef<::System::IntPtr> outName);

  /// @brief Method Internal_TrySetControllerLateLatchAction, addr 0x6829844, size 0x8c, virtual false, abstract: false, final false
  static inline bool Internal_TrySetControllerLateLatchAction(uint32_t deviceId, uint64_t actionId);

  /// @brief Method RegisterDevices, addr 0x6826afc, size 0x2a8, virtual false, abstract: false, final false
  static inline bool RegisterDevices(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig*>* actionMaps, bool isAdditive);

  /// @brief Method RegisterLayouts, addr 0x681fdb0, size 0x224, virtual false, abstract: false, final false
  static inline void RegisterLayouts();

  /// @brief Method SanitizeCharForOpenXRPath, addr 0x6828390, size 0xd8, virtual false, abstract: false, final false
  static inline char16_t SanitizeCharForOpenXRPath(char16_t c);

  /// @brief Method SanitizeStringForOpenXRPath, addr 0x6827df4, size 0x1bc, virtual false, abstract: false, final false
  static inline ::StringW SanitizeStringForOpenXRPath(::StringW input);

  /// @brief Method SendHapticImpulse, addr 0x6828770, size 0x84, virtual false, abstract: false, final false
  static inline void SendHapticImpulse(::UnityEngine::InputSystem::InputAction* action, float_t amplitude, float_t duration, ::UnityEngine::InputSystem::InputDevice* inputDevice);

  /// @brief Method SendHapticImpulse, addr 0x6828680, size 0xf0, virtual false, abstract: false, final false
  static inline void SendHapticImpulse(::UnityEngine::InputSystem::InputAction* action, float_t amplitude, float_t frequency, float_t duration, ::UnityEngine::InputSystem::InputDevice* inputDevice);

  /// @brief Method SendHapticImpulse, addr 0x6828550, size 0x84, virtual false, abstract: false, final false
  static inline void SendHapticImpulse(::UnityEngine::InputSystem::InputActionReference* actionRef, float_t amplitude, float_t duration, ::UnityEngine::InputSystem::InputDevice* inputDevice);

  /// @brief Method SendHapticImpulse, addr 0x68285d4, size 0xac, virtual false, abstract: false, final false
  static inline void SendHapticImpulse(::UnityEngine::InputSystem::InputActionReference* actionRef, float_t amplitude, float_t frequency, float_t duration,
                                       ::UnityEngine::InputSystem::InputDevice* inputDevice);

  /// @brief Method SendHapticImpulse, addr 0x6828cec, size 0xe8, virtual false, abstract: false, final false
  static inline void SendHapticImpulse(::UnityEngine::XR::InputDevice device, float_t amplitude, float_t frequency, float_t duration);

  /// @brief Method SetDpadBindingCustomValues, addr 0x68277cc, size 0x134, virtual false, abstract: false, final false
  static inline void SetDpadBindingCustomValues();

  /// @brief Method StopHapticImpulse, addr 0x6828f30, size 0xb8, virtual false, abstract: false, final false
  static inline void StopHapticImpulse(::UnityEngine::XR::InputDevice device);

  /// @brief Method StopHaptics, addr 0x6828b78, size 0xd0, virtual false, abstract: false, final false
  static inline void StopHaptics(::UnityEngine::InputSystem::InputActionReference* actionRef, ::UnityEngine::InputSystem::InputDevice* inputDevice);

  /// @brief Method StopHaptics, addr 0x6828c48, size 0xa4, virtual false, abstract: false, final false
  static inline void StopHaptics(::UnityEngine::InputSystem::InputAction* inputAction, ::UnityEngine::InputSystem::InputDevice* inputDevice);

  /// @brief Method TryGetInputSourceName, addr 0x68290e8, size 0xec, virtual false, abstract: false, final false
  static inline bool TryGetInputSourceName(::UnityEngine::InputSystem::InputAction* inputAction, int32_t index, ::ByRef<::StringW> name,
                                           ::UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags flags, ::UnityEngine::InputSystem::InputDevice* inputDevice);

  /// @brief Method TrySetControllerLateLatchAction, addr 0x68298d0, size 0x70, virtual false, abstract: false, final false
  static inline bool TrySetControllerLateLatchAction(::UnityEngine::XR::InputDevice device, ::UnityEngine::XR::InputFeatureUsage usage);

  /// @brief Method TrySetControllerLateLatchAction, addr 0x6829940, size 0xcc, virtual false, abstract: false, final false
  static inline bool TrySetControllerLateLatchAction(::UnityEngine::XR::InputDevice device, ::StringW usageName);

  /// @brief Method TrySetControllerLateLatchAction, addr 0x68296e4, size 0x160, virtual false, abstract: false, final false
  static inline bool TrySetControllerLateLatchAction(::UnityEngine::InputSystem::InputAction* inputAction);

  /// @brief Method UserPathToDeviceName, addr 0x6827ab0, size 0x208, virtual false, abstract: false, final false
  static inline ::StringW UserPathToDeviceName(::StringW userPath);

  /// @brief Method ValidateActionMapConfig, addr 0x68268b8, size 0x1b8, virtual false, abstract: false, final false
  static inline bool ValidateActionMapConfig(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature* interactionFeature,
                                             ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionMapConfig* actionMapConfig);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType>* getStaticF_ExpectedControlTypeToActionType();

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getStaticF_kVirtualControlMap();

  static inline void
  setStaticF_ExpectedControlTypeToActionType(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature_ActionType>* value);

  static inline void setStaticF_kVirtualControlMap(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRInput();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRInput(OpenXRInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRInput(OpenXRInput const&) = delete;

  /// @brief Field Library offset 0xffffffff size 0x8
  static constexpr ::ConstString Library{ u"UnityOpenXR" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18515 };

  /// @brief Field s_devicePoseActionName offset 0xffffffff size 0x8
  static constexpr ::ConstString s_devicePoseActionName{ u"devicepose" };

  /// @brief Field s_pointerActionName offset 0xffffffff size 0x8
  static constexpr ::ConstString s_pointerActionName{ u"pointer" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Input::OpenXRInput, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Input
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::OpenXRInput_InputSourceNameFlags, "UnityEngine.XR.OpenXR.Input", "OpenXRInput/InputSourceNameFlags");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Input::OpenXRInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::OpenXRInput*, "UnityEngine.XR.OpenXR.Input", "OpenXRInput");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Input::OpenXRInput___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::OpenXRInput___c*, "UnityEngine.XR.OpenXR.Input", "OpenXRInput/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::OpenXRInput_GetInternalDeviceIdCommand, "UnityEngine.XR.OpenXR.Input", "OpenXRInput/GetInternalDeviceIdCommand");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedBinding, "UnityEngine.XR.OpenXR.Input", "OpenXRInput/SerializedBinding");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::OpenXRInput_SerializedGuid, "UnityEngine.XR.OpenXR.Input", "OpenXRInput/SerializedGuid");

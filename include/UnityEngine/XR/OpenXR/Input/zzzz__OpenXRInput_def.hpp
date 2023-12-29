#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRInput)
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::XR::OpenXR::Input {
class __OpenXRInput____c;
}
namespace UnityEngine::XR::OpenXR::Input {
struct __OpenXRInput__SerializedBinding;
}
namespace UnityEngine::XR::OpenXR::Input {
struct __OpenXRInput__GetInternalDeviceIdCommand;
}
namespace UnityEngine::XR::OpenXR::Features {
struct __OpenXRInteractionFeature__ActionType;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature;
}
namespace UnityEngine::XR::OpenXR::Input {
struct __OpenXRInput__SerializedGuid;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::XR::OpenXR::Input {
struct __OpenXRInput__InputSourceNameFlags;
}
namespace UnityEngine::XR::OpenXR::Features {
class __OpenXRInteractionFeature__ActionMapConfig;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace UnityEngine::XR::OpenXR::Features {
class __OpenXRInteractionFeature__DeviceConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
class __OpenXRInteractionFeature__ActionBinding;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputDeviceCommandInfo;
}
namespace System {
struct Guid;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Input {
struct __OpenXRInput__InputSourceNameFlags;
}
namespace UnityEngine::XR::OpenXR::Input {
class OpenXRInput;
}
namespace UnityEngine::XR::OpenXR::Input {
class __OpenXRInput____c;
}
namespace UnityEngine::XR::OpenXR::Input {
struct __OpenXRInput__GetInternalDeviceIdCommand;
}
namespace UnityEngine::XR::OpenXR::Input {
struct __OpenXRInput__SerializedBinding;
}
namespace UnityEngine::XR::OpenXR::Input {
struct __OpenXRInput__SerializedGuid;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Input::OpenXRInput);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c);
MARK_VAL_T(::UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand);
MARK_VAL_T(::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedBinding);
MARK_VAL_T(::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid);
// Type: ::SerializedGuid
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: None }
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2406))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14431))
// CS Name: ::OpenXRInput::SerializedGuid
struct CORDL_TYPE __OpenXRInput__SerializedGuid {
public:
  // Declarations
  /// @brief Field guid, offset 0x0, size 0x10
  __declspec(property(get = __get_guid, put = __set_guid))::System::Guid guid;

  /// @brief Field ulong1, offset 0x0, size 0x8
  __declspec(property(get = __get_ulong1, put = __set_ulong1)) uint64_t ulong1;

  /// @brief Field ulong2, offset 0x8, size 0x8
  __declspec(property(get = __get_ulong2, put = __set_ulong2)) uint64_t ulong2;

  constexpr ::System::Guid& __get_guid();

  constexpr ::System::Guid const& __get_guid() const;

  constexpr void __set_guid(::System::Guid value);

  constexpr uint64_t& __get_ulong1();

  constexpr uint64_t const& __get_ulong1() const;

  constexpr void __set_ulong1(uint64_t value);

  constexpr uint64_t& __get_ulong2();

  constexpr uint64_t const& __get_ulong2() const;

  constexpr void __set_ulong2(uint64_t value);

  // Ctor Parameters [CppParam { name: "guid", ty: "::System::Guid", modifiers: "", def_value: None }, CppParam { name: "ulong1", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name:
  // "ulong2", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr __OpenXRInput__SerializedGuid(::System::Guid guid, uint64_t ulong1, uint64_t ulong2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OpenXRInput__SerializedGuid();

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
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Input
// Type: ::SerializedBinding
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14432))
// CS Name: ::OpenXRInput::SerializedBinding
struct CORDL_TYPE __OpenXRInput__SerializedBinding {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "actionId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr __OpenXRInput__SerializedBinding(uint64_t actionId, ::StringW path) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OpenXRInput__SerializedBinding();

  /// @brief Field actionId, offset: 0x0, size: 0x8, def value: None
  uint64_t actionId;

  /// @brief Field path, offset: 0x8, size: 0x8, def value: None
  ::StringW path;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedBinding, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedBinding, actionId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedBinding, path) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::Input
// Type: ::InputSourceNameFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14433))
// CS Name: ::OpenXRInput::InputSourceNameFlags
struct CORDL_TYPE __OpenXRInput__InputSourceNameFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OpenXRInput__InputSourceNameFlags_Unwrapped
  enum struct ____OpenXRInput__InputSourceNameFlags_Unwrapped : int32_t {
    __E_UserPath = static_cast<int32_t>(0x1),
    __E_InteractionProfile = static_cast<int32_t>(0x2),
    __E_Component = static_cast<int32_t>(0x4),
    __E_All = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OpenXRInput__InputSourceNameFlags_Unwrapped() const noexcept {
    return static_cast<____OpenXRInput__InputSourceNameFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OpenXRInput__InputSourceNameFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OpenXRInput__InputSourceNameFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field UserPath value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags const UserPath;

  /// @brief Field InteractionProfile value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags const InteractionProfile;

  /// @brief Field Component value: static_cast<int32_t>(0x4)
  static ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags const Component;

  /// @brief Field All value: static_cast<int32_t>(0x7)
  static ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags const All;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::Input
// Type: ::GetInternalDeviceIdCommand
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: Some(0) }
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14434))
// CS Name: ::OpenXRInput::GetInternalDeviceIdCommand
#pragma pack(push, 0)
struct CORDL_TYPE __OpenXRInput__GetInternalDeviceIdCommand {
public:
  // Declarations
  /// @brief Field baseCommand, offset 0x0, size 0x8
  __declspec(property(get = __get_baseCommand, put = __set_baseCommand))::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand;

  /// @brief Field deviceId, offset 0x8, size 0x4
  __declspec(property(get = __get_deviceId, put = __set_deviceId)) uint32_t deviceId;

  __declspec(property(get = get_typeStatic))::UnityEngine::InputSystem::Utilities::FourCC typeStatic;

  /// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo"
  constexpr operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo*();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& __get_baseCommand();

  constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand const& __get_baseCommand() const;

  constexpr void __set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value);

  constexpr uint32_t& __get_deviceId();

  constexpr uint32_t const& __get_deviceId() const;

  constexpr void __set_deviceId(uint32_t value);

  /// @brief Method get_Type addr 0x2b054d0 size 0x30 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Type();

  /// @brief Method get_typeStatic addr 0x2b05500 size 0x30 virtual true final true
  inline ::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic();

  /// @brief Method Create addr 0x2b04fbc size 0x50 virtual false final false
  static inline ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand Create();

  // Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: None }, CppParam { name: "deviceId", ty: "uint32_t",
  // modifiers: "", def_value: None }]
  constexpr __OpenXRInput__GetInternalDeviceIdCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, uint32_t deviceId) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OpenXRInput__GetInternalDeviceIdCommand();

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
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand, 0xc>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Input
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14435))
// CS Name: ::OpenXRInput::<>c*
class CORDL_TYPE __OpenXRInput____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c* __9;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0))::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*, bool>* __9__9_0;

  /// @brief Field <>9__9_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__9_1,
                             put = setStaticF___9__9_1))::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig*, ::StringW>* __9__9_1;

  /// @brief Field <>9__9_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__9_2, put = setStaticF___9__9_2))::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*, bool>* __9__9_2;

  /// @brief Field <>9__9_3, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF___9__9_3,
      put = setStaticF___9__9_3))::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>* __9__9_3;

  static inline void setStaticF___9(::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c* value);

  static inline ::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c* getStaticF___9();

  static inline void setStaticF___9__9_0(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*, bool>* value);

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*, bool>* getStaticF___9__9_0();

  static inline void setStaticF___9__9_1(::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig*, ::StringW>* value);

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig*, ::StringW>* getStaticF___9__9_1();

  static inline void setStaticF___9__9_2(::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*, bool>* value);

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*, bool>* getStaticF___9__9_2();

  static inline void
  setStaticF___9__9_3(::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>* value);

  static inline ::System::Func_2<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*, ::System::Collections::Generic::IEnumerable_1<::StringW>*>* getStaticF___9__9_3();

  static inline ::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c* New_ctor();

  /// @brief Method .ctor addr 0x2b05594 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <AttachActionSets>b__9_0 addr 0x2b0559c size 0x14 virtual false final false
  inline bool _AttachActionSets_b__9_0(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature* f);

  /// @brief Method <AttachActionSets>b__9_1 addr 0x2b055b0 size 0x18 virtual false final false
  inline ::StringW _AttachActionSets_b__9_1(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig* d);

  /// @brief Method <AttachActionSets>b__9_2 addr 0x2b055c8 size 0x20 virtual false final false
  inline bool _AttachActionSets_b__9_2(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding* b);

  /// @brief Method <AttachActionSets>b__9_3 addr 0x2b055e8 size 0x18 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::StringW>* _AttachActionSets_b__9_3(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding* b);

  // Ctor Parameters [CppParam { name: "", ty: "__OpenXRInput____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OpenXRInput____c(__OpenXRInput____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OpenXRInput____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OpenXRInput____c(__OpenXRInput____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OpenXRInput____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Input
// Type: UnityEngine.XR.OpenXR.Input::OpenXRInput
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Input {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14436))
// CS Name: ::UnityEngine.XR.OpenXR.Input::OpenXRInput*
class CORDL_TYPE OpenXRInput : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c;

  using GetInternalDeviceIdCommand = ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand;

  using InputSourceNameFlags = ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags;

  using SerializedBinding = ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedBinding;

  using SerializedGuid = ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid;

  /// @brief Field ExpectedControlTypeToActionType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ExpectedControlTypeToActionType, put = setStaticF_ExpectedControlTypeToActionType))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType>* ExpectedControlTypeToActionType;

  /// @brief Field kVirtualControlMap, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_kVirtualControlMap, put = setStaticF_kVirtualControlMap))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* kVirtualControlMap;

  static inline void
  setStaticF_ExpectedControlTypeToActionType(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType>* getStaticF_ExpectedControlTypeToActionType();

  static inline void setStaticF_kVirtualControlMap(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* getStaticF_kVirtualControlMap();

  /// @brief Method RegisterLayouts addr 0x2afd938 size 0x1ec virtual false final false
  static inline void RegisterLayouts();

  /// @brief Method ValidateActionMapConfig addr 0x2b0383c size 0x154 virtual false final false
  static inline bool ValidateActionMapConfig(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature* interactionFeature,
                                             ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig* actionMapConfig);

  /// @brief Method AttachActionSets addr 0x2aff0f0 size 0x1568 virtual false final false
  static inline void AttachActionSets();

  /// @brief Method SanitizeCharForOpenXRPath addr 0x2b04354 size 0xfc virtual false final false
  static inline char16_t SanitizeCharForOpenXRPath(char16_t c);

  /// @brief Method SanitizeStringForOpenXRPath addr 0x2b03cf8 size 0x1b4 virtual false final false
  static inline ::StringW SanitizeStringForOpenXRPath(::StringW input);

  /// @brief Method GetActionHandleName addr 0x2b04450 size 0xd8 virtual false final false
  static inline ::StringW GetActionHandleName(::UnityEngine::InputSystem::InputControl* control);

  /// @brief Method SendHapticImpulse addr 0x2b04528 size 0x80 virtual false final false
  static inline void SendHapticImpulse(::UnityEngine::InputSystem::InputActionReference* actionRef, float_t amplitude, float_t duration, ::UnityEngine::InputSystem::InputDevice* inputDevice);

  /// @brief Method SendHapticImpulse addr 0x2b045a8 size 0xa0 virtual false final false
  static inline void SendHapticImpulse(::UnityEngine::InputSystem::InputActionReference* actionRef, float_t amplitude, float_t frequency, float_t duration,
                                       ::UnityEngine::InputSystem::InputDevice* inputDevice);

  /// @brief Method SendHapticImpulse addr 0x2b04724 size 0x80 virtual false final false
  static inline void SendHapticImpulse(::UnityEngine::InputSystem::InputAction* action, float_t amplitude, float_t duration, ::UnityEngine::InputSystem::InputDevice* inputDevice);

  /// @brief Method SendHapticImpulse addr 0x2b04648 size 0xdc virtual false final false
  static inline void SendHapticImpulse(::UnityEngine::InputSystem::InputAction* action, float_t amplitude, float_t frequency, float_t duration, ::UnityEngine::InputSystem::InputDevice* inputDevice);

  /// @brief Method StopHaptics addr 0x2b04b60 size 0xc8 virtual false final false
  static inline void StopHaptics(::UnityEngine::InputSystem::InputActionReference* actionRef, ::UnityEngine::InputSystem::InputDevice* inputDevice);

  /// @brief Method StopHaptics addr 0x2b04c28 size 0x94 virtual false final false
  static inline void StopHaptics(::UnityEngine::InputSystem::InputAction* inputAction, ::UnityEngine::InputSystem::InputDevice* inputDevice);

  /// @brief Method TryGetInputSourceName addr 0x2b04d40 size 0xe4 virtual false final false
  static inline bool TryGetInputSourceName(::UnityEngine::InputSystem::InputAction* inputAction, int32_t index, ByRef<::StringW> name,
                                           ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags flags, ::UnityEngine::InputSystem::InputDevice* inputDevice);

  /// @brief Method GetActionHandle addr 0x2b047a4 size 0x26c virtual false final false
  static inline uint64_t GetActionHandle(::UnityEngine::InputSystem::InputAction* inputAction, ::UnityEngine::InputSystem::InputDevice* inputDevice);

  /// @brief Method GetDeviceId addr 0x2b04a10 size 0xa4 virtual false final false
  static inline uint32_t GetDeviceId(::UnityEngine::InputSystem::InputDevice* inputDevice);

  /// @brief Method UserPathToDeviceName addr 0x2b03a08 size 0x1dc virtual false final false
  static inline ::StringW UserPathToDeviceName(::StringW userPath);

  /// @brief Method Internal_SendHapticImpulse addr 0x2b04ab4 size 0xac virtual false final false
  static inline void Internal_SendHapticImpulse(uint32_t deviceId, uint64_t actionId, float_t amplitude, float_t frequency, float_t duration);

  /// @brief Method Internal_StopHaptics addr 0x2b04cbc size 0x84 virtual false final false
  static inline void Internal_StopHaptics(uint32_t deviceId, uint64_t actionId);

  /// @brief Method Internal_GetActionId addr 0x2b04f1c size 0xa0 virtual false final false
  static inline uint64_t Internal_GetActionId(uint32_t deviceId, ::StringW name);

  /// @brief Method Internal_TryGetInputSourceNamePtr addr 0x2b0500c size 0xac virtual false final false
  static inline bool Internal_TryGetInputSourceNamePtr(uint32_t deviceId, uint64_t actionId, uint32_t index, uint32_t flags, ByRef<void*> outName);

  /// @brief Method Internal_TryGetInputSourceName addr 0x2b04e24 size 0xf8 virtual false final false
  static inline bool Internal_TryGetInputSourceName(uint32_t deviceId, uint64_t actionId, uint32_t index, uint32_t flags, ByRef<::StringW> outName);

  /// @brief Method Internal_RegisterDeviceDefinition addr 0x2b03be4 size 0x114 virtual false final false
  static inline uint64_t Internal_RegisterDeviceDefinition(::StringW userPath, ::StringW interactionProfile, uint32_t characteristics, ::StringW name, ::StringW manufacturer, ::StringW serialNumber);

  /// @brief Method Internal_CreateActionSet addr 0x2b03eac size 0xc4 virtual false final false
  static inline uint64_t Internal_CreateActionSet(::StringW name, ::StringW localizedName, ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid guid);

  /// @brief Method Internal_CreateAction addr 0x2b03f70 size 0x234 virtual false final false
  static inline uint64_t Internal_CreateAction(uint64_t actionSetId, ::StringW name, ::StringW localizedName, uint32_t actionType, ::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid guid,
                                               ::ArrayW<::StringW, ::Array<::StringW>*> userPaths, uint32_t userPathCount, ::ArrayW<::StringW, ::Array<::StringW>*> usages, uint32_t usageCount);

  /// @brief Method Internal_SuggestBindings addr 0x2b041a4 size 0x14c virtual false final false
  static inline bool Internal_SuggestBindings(
      ::StringW interactionProfile,
      ::ArrayW<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedBinding, ::Array<::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedBinding>*> serializedBindings,
      uint32_t serializedBindingCount);

  /// @brief Method Internal_AttachActionSets addr 0x2b042f0 size 0x64 virtual false final false
  static inline bool Internal_AttachActionSets();

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRInput", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRInput(OpenXRInput&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRInput", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRInput(OpenXRInput const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRInput();

public:
  /// @brief Field s_devicePoseActionName offset 0xffffffff size 0x8
  static constexpr ::ConstString s_devicePoseActionName{ u"devicepose" };

  /// @brief Field s_pointerActionName offset 0xffffffff size 0x8
  static constexpr ::ConstString s_pointerActionName{ u"pointer" };

  /// @brief Field Library offset 0xffffffff size 0x8
  static constexpr ::ConstString Library{ u"UnityOpenXR" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Input::OpenXRInput, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Input
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::__OpenXRInput__InputSourceNameFlags, "UnityEngine.XR.OpenXR.Input", "OpenXRInput/InputSourceNameFlags");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Input::OpenXRInput);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::OpenXRInput*, "UnityEngine.XR.OpenXR.Input", "OpenXRInput");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::__OpenXRInput____c*, "UnityEngine.XR.OpenXR.Input", "OpenXRInput/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::__OpenXRInput__GetInternalDeviceIdCommand, "UnityEngine.XR.OpenXR.Input", "OpenXRInput/GetInternalDeviceIdCommand");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedBinding, "UnityEngine.XR.OpenXR.Input", "OpenXRInput/SerializedBinding");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Input::__OpenXRInput__SerializedGuid, "UnityEngine.XR.OpenXR.Input", "OpenXRInput/SerializedGuid");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include "UnityEngine/XR/zzzz__InputDeviceCharacteristics_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRInteractionFeature)
namespace UnityEngine::XR::OpenXR::Features {
class __OpenXRInteractionFeature__ActionBinding;
}
namespace UnityEngine::XR::OpenXR::Features {
class __OpenXRInteractionFeature__DeviceConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
struct __OpenXRInteractionFeature__ActionType;
}
namespace UnityEngine::XR::OpenXR::Features {
class __OpenXRInteractionFeature__ActionConfig;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::XR::OpenXR::Features {
class __OpenXRInteractionFeature__ActionMapConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
class __OpenXRInteractionFeature__UserPaths;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features {
struct __OpenXRInteractionFeature__ActionType;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRInteractionFeature;
}
namespace UnityEngine::XR::OpenXR::Features {
class __OpenXRInteractionFeature__ActionBinding;
}
namespace UnityEngine::XR::OpenXR::Features {
class __OpenXRInteractionFeature__ActionConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
class __OpenXRInteractionFeature__ActionMapConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
class __OpenXRInteractionFeature__DeviceConfig;
}
namespace UnityEngine::XR::OpenXR::Features {
class __OpenXRInteractionFeature__UserPaths;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig);
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__UserPaths);
// Type: ::ActionType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14442))
// CS Name: ::OpenXRInteractionFeature::ActionType
struct CORDL_TYPE __OpenXRInteractionFeature__ActionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OpenXRInteractionFeature__ActionType_Unwrapped
  enum struct ____OpenXRInteractionFeature__ActionType_Unwrapped : int32_t {
    __E_Binary = static_cast<int32_t>(0x0),
    __E_Axis1D = static_cast<int32_t>(0x1),
    __E_Axis2D = static_cast<int32_t>(0x2),
    __E_Pose = static_cast<int32_t>(0x3),
    __E_Vibrate = static_cast<int32_t>(0x4),
    __E_Count = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OpenXRInteractionFeature__ActionType_Unwrapped() const noexcept {
    return static_cast<____OpenXRInteractionFeature__ActionType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OpenXRInteractionFeature__ActionType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OpenXRInteractionFeature__ActionType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Binary value: static_cast<int32_t>(0x0)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType const Binary;

  /// @brief Field Axis1D value: static_cast<int32_t>(0x1)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType const Axis1D;

  /// @brief Field Axis2D value: static_cast<int32_t>(0x2)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType const Axis2D;

  /// @brief Field Pose value: static_cast<int32_t>(0x3)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType const Pose;

  /// @brief Field Vibrate value: static_cast<int32_t>(0x4)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType const Vibrate;

  /// @brief Field Count value: static_cast<int32_t>(0x5)
  static ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType const Count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
// Type: ::ActionBinding
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14443))
// CS Name: ::OpenXRInteractionFeature::ActionBinding*
class CORDL_TYPE __OpenXRInteractionFeature__ActionBinding : public ::System::Object {
public:
  // Declarations
  /// @brief Field interactionProfileName, offset 0x10, size 0x8
  __declspec(property(get = __get_interactionProfileName, put = __set_interactionProfileName))::StringW interactionProfileName;

  /// @brief Field interactionPath, offset 0x18, size 0x8
  __declspec(property(get = __get_interactionPath, put = __set_interactionPath))::StringW interactionPath;

  /// @brief Field userPaths, offset 0x20, size 0x8
  __declspec(property(get = __get_userPaths, put = __set_userPaths))::System::Collections::Generic::List_1<::StringW>* userPaths;

  constexpr ::StringW& __get_interactionProfileName();

  constexpr ::StringW const& __get_interactionProfileName() const;

  constexpr void __set_interactionProfileName(::StringW value);

  constexpr ::StringW& __get_interactionPath();

  constexpr ::StringW const& __get_interactionPath() const;

  constexpr void __set_interactionPath(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_userPaths();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_userPaths() const;

  constexpr void __set_userPaths(::System::Collections::Generic::List_1<::StringW>* value);

  static inline ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding* New_ctor();

  /// @brief Method .ctor addr 0x2b066c0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OpenXRInteractionFeature__ActionBinding", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OpenXRInteractionFeature__ActionBinding(__OpenXRInteractionFeature__ActionBinding&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OpenXRInteractionFeature__ActionBinding", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OpenXRInteractionFeature__ActionBinding(__OpenXRInteractionFeature__ActionBinding const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OpenXRInteractionFeature__ActionBinding();

public:
  /// @brief Field interactionProfileName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___interactionProfileName;

  /// @brief Field interactionPath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___interactionPath;

  /// @brief Field userPaths, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___userPaths;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding, ___interactionProfileName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding, ___interactionPath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding, ___userPaths) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
// Type: ::ActionConfig
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14442)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14444))
// CS Name: ::OpenXRInteractionFeature::ActionConfig*
class CORDL_TYPE __OpenXRInteractionFeature__ActionConfig : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::StringW name;

  /// @brief Field type, offset 0x18, size 0x4
  __declspec(property(get = __get_type, put = __set_type))::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType type;

  /// @brief Field localizedName, offset 0x20, size 0x8
  __declspec(property(get = __get_localizedName, put = __set_localizedName))::StringW localizedName;

  /// @brief Field bindings, offset 0x28, size 0x8
  __declspec(property(get = __get_bindings, put = __set_bindings))::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*>* bindings;

  /// @brief Field usages, offset 0x30, size 0x8
  __declspec(property(get = __get_usages, put = __set_usages))::System::Collections::Generic::List_1<::StringW>* usages;

  constexpr ::StringW& __get_name();

  constexpr ::StringW const& __get_name() const;

  constexpr void __set_name(::StringW value);

  constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType& __get_type();

  constexpr ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType const& __get_type() const;

  constexpr void __set_type(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType value);

  constexpr ::StringW& __get_localizedName();

  constexpr ::StringW const& __get_localizedName() const;

  constexpr void __set_localizedName(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*>*& __get_bindings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*>*> const& __get_bindings() const;

  constexpr void __set_bindings(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*>* value);

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __get_usages();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __get_usages() const;

  constexpr void __set_usages(::System::Collections::Generic::List_1<::StringW>* value);

  static inline ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig* New_ctor();

  /// @brief Method .ctor addr 0x2b066c8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OpenXRInteractionFeature__ActionConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OpenXRInteractionFeature__ActionConfig(__OpenXRInteractionFeature__ActionConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OpenXRInteractionFeature__ActionConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OpenXRInteractionFeature__ActionConfig(__OpenXRInteractionFeature__ActionConfig const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OpenXRInteractionFeature__ActionConfig();

public:
  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field type, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType ___type;

  /// @brief Field localizedName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___localizedName;

  /// @brief Field bindings, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*>* ___bindings;

  /// @brief Field usages, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___usages;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig, ___type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig, ___localizedName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig, ___bindings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig, ___usages) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
// Type: ::DeviceConfig
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(15574))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14445))
// CS Name: ::OpenXRInteractionFeature::DeviceConfig*
class CORDL_TYPE __OpenXRInteractionFeature__DeviceConfig : public ::System::Object {
public:
  // Declarations
  /// @brief Field characteristics, offset 0x10, size 0x4
  __declspec(property(get = __get_characteristics, put = __set_characteristics))::UnityEngine::XR::InputDeviceCharacteristics characteristics;

  /// @brief Field userPath, offset 0x18, size 0x8
  __declspec(property(get = __get_userPath, put = __set_userPath))::StringW userPath;

  constexpr ::UnityEngine::XR::InputDeviceCharacteristics& __get_characteristics();

  constexpr ::UnityEngine::XR::InputDeviceCharacteristics const& __get_characteristics() const;

  constexpr void __set_characteristics(::UnityEngine::XR::InputDeviceCharacteristics value);

  constexpr ::StringW& __get_userPath();

  constexpr ::StringW const& __get_userPath() const;

  constexpr void __set_userPath(::StringW value);

  static inline ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig* New_ctor();

  /// @brief Method .ctor addr 0x2b066d0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OpenXRInteractionFeature__DeviceConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OpenXRInteractionFeature__DeviceConfig(__OpenXRInteractionFeature__DeviceConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OpenXRInteractionFeature__DeviceConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OpenXRInteractionFeature__DeviceConfig(__OpenXRInteractionFeature__DeviceConfig const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OpenXRInteractionFeature__DeviceConfig();

public:
  /// @brief Field characteristics, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::XR::InputDeviceCharacteristics ___characteristics;

  /// @brief Field userPath, offset: 0x18, size: 0x8, def value: None
  ::StringW ___userPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig, ___characteristics) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig, ___userPath) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
// Type: ::ActionMapConfig
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14446))
// CS Name: ::OpenXRInteractionFeature::ActionMapConfig*
class CORDL_TYPE __OpenXRInteractionFeature__ActionMapConfig : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::StringW name;

  /// @brief Field localizedName, offset 0x18, size 0x8
  __declspec(property(get = __get_localizedName, put = __set_localizedName))::StringW localizedName;

  /// @brief Field deviceInfos, offset 0x20, size 0x8
  __declspec(property(get = __get_deviceInfos,
                      put = __set_deviceInfos))::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig*>* deviceInfos;

  /// @brief Field actions, offset 0x28, size 0x8
  __declspec(property(get = __get_actions, put = __set_actions))::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig*>* actions;

  /// @brief Field desiredInteractionProfile, offset 0x30, size 0x8
  __declspec(property(get = __get_desiredInteractionProfile, put = __set_desiredInteractionProfile))::StringW desiredInteractionProfile;

  /// @brief Field manufacturer, offset 0x38, size 0x8
  __declspec(property(get = __get_manufacturer, put = __set_manufacturer))::StringW manufacturer;

  /// @brief Field serialNumber, offset 0x40, size 0x8
  __declspec(property(get = __get_serialNumber, put = __set_serialNumber))::StringW serialNumber;

  constexpr ::StringW& __get_name();

  constexpr ::StringW const& __get_name() const;

  constexpr void __set_name(::StringW value);

  constexpr ::StringW& __get_localizedName();

  constexpr ::StringW const& __get_localizedName() const;

  constexpr void __set_localizedName(::StringW value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig*>*& __get_deviceInfos();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig*>*> const&
  __get_deviceInfos() const;

  constexpr void __set_deviceInfos(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig*>*& __get_actions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig*>*> const& __get_actions() const;

  constexpr void __set_actions(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig*>* value);

  constexpr ::StringW& __get_desiredInteractionProfile();

  constexpr ::StringW const& __get_desiredInteractionProfile() const;

  constexpr void __set_desiredInteractionProfile(::StringW value);

  constexpr ::StringW& __get_manufacturer();

  constexpr ::StringW const& __get_manufacturer() const;

  constexpr void __set_manufacturer(::StringW value);

  constexpr ::StringW& __get_serialNumber();

  constexpr ::StringW const& __get_serialNumber() const;

  constexpr void __set_serialNumber(::StringW value);

  static inline ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig* New_ctor();

  /// @brief Method .ctor addr 0x2b066d8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OpenXRInteractionFeature__ActionMapConfig", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OpenXRInteractionFeature__ActionMapConfig(__OpenXRInteractionFeature__ActionMapConfig&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OpenXRInteractionFeature__ActionMapConfig", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OpenXRInteractionFeature__ActionMapConfig(__OpenXRInteractionFeature__ActionMapConfig const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OpenXRInteractionFeature__ActionMapConfig();

public:
  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field localizedName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___localizedName;

  /// @brief Field deviceInfos, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig*>* ___deviceInfos;

  /// @brief Field actions, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig*>* ___actions;

  /// @brief Field desiredInteractionProfile, offset: 0x30, size: 0x8, def value: None
  ::StringW ___desiredInteractionProfile;

  /// @brief Field manufacturer, offset: 0x38, size: 0x8, def value: None
  ::StringW ___manufacturer;

  /// @brief Field serialNumber, offset: 0x40, size: 0x8, def value: None
  ::StringW ___serialNumber;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig, ___localizedName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig, ___deviceInfos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig, ___actions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig, ___desiredInteractionProfile) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig, ___manufacturer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig, ___serialNumber) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
// Type: ::UserPaths
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14447))
// CS Name: ::OpenXRInteractionFeature::UserPaths*
class CORDL_TYPE __OpenXRInteractionFeature__UserPaths : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__OpenXRInteractionFeature__UserPaths", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OpenXRInteractionFeature__UserPaths(__OpenXRInteractionFeature__UserPaths&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OpenXRInteractionFeature__UserPaths", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OpenXRInteractionFeature__UserPaths(__OpenXRInteractionFeature__UserPaths const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OpenXRInteractionFeature__UserPaths();

public:
  /// @brief Field leftHand offset 0xffffffff size 0x8
  static constexpr ::ConstString leftHand{ u"/user/hand/left" };

  /// @brief Field rightHand offset 0xffffffff size 0x8
  static constexpr ::ConstString rightHand{ u"/user/hand/right" };

  /// @brief Field head offset 0xffffffff size 0x8
  static constexpr ::ConstString head{ u"/user/head" };

  /// @brief Field gamepad offset 0xffffffff size 0x8
  static constexpr ::ConstString gamepad{ u"/user/gamepad" };

  /// @brief Field treadmill offset 0xffffffff size 0x8
  static constexpr ::ConstString treadmill{ u"/user/treadmill" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__UserPaths, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
// Type: UnityEngine.XR.OpenXR.Features::OpenXRInteractionFeature
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 78, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR::Features {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14441))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14448))
// CS Name: ::UnityEngine.XR.OpenXR.Features::OpenXRInteractionFeature*
class CORDL_TYPE OpenXRInteractionFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
  // Declarations
  using UserPaths = ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__UserPaths;

  using ActionMapConfig = ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig;

  using DeviceConfig = ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig;

  using ActionConfig = ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig;

  using ActionBinding = ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding;

  using ActionType = ::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType;

  /// @brief Field m_CreatedActionMaps, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_m_CreatedActionMaps,
               put = setStaticF_m_CreatedActionMaps))::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig*>* m_CreatedActionMaps;

  static inline void setStaticF_m_CreatedActionMaps(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig*>* getStaticF_m_CreatedActionMaps();

  /// @brief Method RegisterDeviceLayout addr 0x2b06540 size 0x4 virtual true final false
  inline void RegisterDeviceLayout();

  /// @brief Method UnregisterDeviceLayout addr 0x2b06544 size 0x4 virtual true final false
  inline void UnregisterDeviceLayout();

  /// @brief Method RegisterActionMapsWithRuntime addr 0x2b06548 size 0x4 virtual true final false
  inline void RegisterActionMapsWithRuntime();

  /// @brief Method OnInstanceCreate addr 0x2b0654c size 0x20 virtual true final false
  inline bool OnInstanceCreate(uint64_t xrSession);

  /// @brief Method CreateActionMaps addr 0x2b03990 size 0x78 virtual false final false
  inline void CreateActionMaps(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig*>* configs);

  /// @brief Method AddActionMap addr 0x2b0656c size 0x148 virtual false final false
  inline void AddActionMap(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig* map);

  /// @brief Method OnEnabledChange addr 0x2b066b4 size 0x4 virtual true final false
  inline void OnEnabledChange();

  /// @brief Method RegisterLayouts addr 0x2b0373c size 0x100 virtual false final false
  static inline void RegisterLayouts();

  static inline ::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature* New_ctor();

  /// @brief Method .ctor addr 0x2b066b8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRInteractionFeature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRInteractionFeature(OpenXRInteractionFeature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRInteractionFeature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRInteractionFeature(OpenXRInteractionFeature const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRInteractionFeature();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature, 0x50>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::Features
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionType, "UnityEngine.XR.OpenXR.Features", "OpenXRInteractionFeature/ActionType");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature*, "UnityEngine.XR.OpenXR.Features", "OpenXRInteractionFeature");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionBinding*, "UnityEngine.XR.OpenXR.Features", "OpenXRInteractionFeature/ActionBinding");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionConfig*, "UnityEngine.XR.OpenXR.Features", "OpenXRInteractionFeature/ActionConfig");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__ActionMapConfig*, "UnityEngine.XR.OpenXR.Features", "OpenXRInteractionFeature/ActionMapConfig");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__DeviceConfig*, "UnityEngine.XR.OpenXR.Features", "OpenXRInteractionFeature/DeviceConfig");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__UserPaths);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Features::__OpenXRInteractionFeature__UserPaths*, "UnityEngine.XR.OpenXR.Features", "OpenXRInteractionFeature/UserPaths");

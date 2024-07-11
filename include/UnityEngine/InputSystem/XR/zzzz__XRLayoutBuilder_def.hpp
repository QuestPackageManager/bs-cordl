#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/XRLayoutBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRLayoutBuilder)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceExecuteCommandDelegate;
}
namespace UnityEngine::InputSystem::XR {
struct FeatureType;
}
namespace UnityEngine::InputSystem::XR {
class XRDeviceDescriptor;
}
namespace UnityEngine::InputSystem::XR {
struct XRFeatureDescriptor;
}
namespace UnityEngine::InputSystem::XR {
class __XRLayoutBuilder____c__DisplayClass5_0;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class XRLayoutBuilder;
}
namespace UnityEngine::InputSystem::XR {
class __XRLayoutBuilder____c__DisplayClass5_0;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::XR::XRLayoutBuilder);
MARK_REF_PTR_T(::UnityEngine::InputSystem::XR::__XRLayoutBuilder____c__DisplayClass5_0);
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// CS Name: ::XRLayoutBuilder::<>c__DisplayClass5_0*
class CORDL_TYPE __XRLayoutBuilder____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field layout, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_layout, put = __cordl_internal_set_layout))::UnityEngine::InputSystem::XR::XRLayoutBuilder* layout;

  static inline ::UnityEngine::InputSystem::XR::__XRLayoutBuilder____c__DisplayClass5_0* New_ctor();

  /// @brief Method <OnFindLayoutForDevice>b__0, addr 0x316cc5c, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* _OnFindLayoutForDevice_b__0();

  constexpr ::UnityEngine::InputSystem::XR::XRLayoutBuilder*& __cordl_internal_get_layout();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::XR::XRLayoutBuilder*> const& __cordl_internal_get_layout() const;

  constexpr void __cordl_internal_set_layout(::UnityEngine::InputSystem::XR::XRLayoutBuilder* value);

  /// @brief Method .ctor, addr 0x316bbd4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XRLayoutBuilder____c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XRLayoutBuilder____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XRLayoutBuilder____c__DisplayClass5_0(__XRLayoutBuilder____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XRLayoutBuilder____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XRLayoutBuilder____c__DisplayClass5_0(__XRLayoutBuilder____c__DisplayClass5_0 const&) = delete;

  /// @brief Field layout, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::XR::XRLayoutBuilder* ___layout;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::__XRLayoutBuilder____c__DisplayClass5_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::__XRLayoutBuilder____c__DisplayClass5_0, ___layout) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::XR
// Type: UnityEngine.InputSystem.XR::XRLayoutBuilder
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.XR::XRLayoutBuilder*
class CORDL_TYPE XRLayoutBuilder : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass5_0 = ::UnityEngine::InputSystem::XR::__XRLayoutBuilder____c__DisplayClass5_0;

  /// @brief Field descriptor, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_descriptor, put = __cordl_internal_set_descriptor))::UnityEngine::InputSystem::XR::XRDeviceDescriptor* descriptor;

  /// @brief Field interfaceName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_interfaceName, put = __cordl_internal_set_interfaceName))::StringW interfaceName;

  /// @brief Field parentLayout, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_parentLayout, put = __cordl_internal_set_parentLayout))::StringW parentLayout;

  /// @brief Field poseSubControlNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_poseSubControlNames, put = setStaticF_poseSubControlNames))::ArrayW<::StringW, ::Array<::StringW>*> poseSubControlNames;

  /// @brief Field poseSubControlTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_poseSubControlTypes,
                             put = setStaticF_poseSubControlTypes))::ArrayW<::UnityEngine::InputSystem::XR::FeatureType, ::Array<::UnityEngine::InputSystem::XR::FeatureType>*> poseSubControlTypes;

  /// @brief Method Build, addr 0x316bf08, size 0xb04, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* Build();

  /// @brief Method ConvertPotentialAliasToName, addr 0x316bbe4, size 0x17c, virtual false, abstract: false, final false
  static inline ::StringW ConvertPotentialAliasToName(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout, ::StringW nameOrAlias);

  /// @brief Method GetParentControlName, addr 0x316bd7c, size 0x38, virtual false, abstract: false, final false
  inline ::StringW GetParentControlName(::StringW name);

  /// @brief Method GetSizeOfFeature, addr 0x316b5a8, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t GetSizeOfFeature(::UnityEngine::InputSystem::XR::XRFeatureDescriptor featureDescriptor);

  /// @brief Method IsPoseControl, addr 0x316bdb4, size 0x154, virtual false, abstract: false, final false
  inline bool IsPoseControl(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::XRFeatureDescriptor>* features, int32_t startIndex);

  /// @brief Method IsSubControl, addr 0x316bd60, size 0x1c, virtual false, abstract: false, final false
  inline bool IsSubControl(::StringW name);

  static inline ::UnityEngine::InputSystem::XR::XRLayoutBuilder* New_ctor();

  /// @brief Method OnFindLayoutForDevice, addr 0x316b780, size 0x454, virtual false, abstract: false, final false
  static inline ::StringW OnFindLayoutForDevice(ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::StringW matchedLayout,
                                                ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeCommandDelegate);

  /// @brief Method SanitizeString, addr 0x316b620, size 0x160, virtual false, abstract: false, final false
  static inline ::StringW SanitizeString(::StringW original, bool allowPaths);

  constexpr ::UnityEngine::InputSystem::XR::XRDeviceDescriptor*& __cordl_internal_get_descriptor();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::XR::XRDeviceDescriptor*> const& __cordl_internal_get_descriptor() const;

  constexpr ::StringW const& __cordl_internal_get_interfaceName() const;

  constexpr ::StringW& __cordl_internal_get_interfaceName();

  constexpr ::StringW const& __cordl_internal_get_parentLayout() const;

  constexpr ::StringW& __cordl_internal_get_parentLayout();

  constexpr void __cordl_internal_set_descriptor(::UnityEngine::InputSystem::XR::XRDeviceDescriptor* value);

  constexpr void __cordl_internal_set_interfaceName(::StringW value);

  constexpr void __cordl_internal_set_parentLayout(::StringW value);

  /// @brief Method .ctor, addr 0x316bbdc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_poseSubControlNames();

  static inline ::ArrayW<::UnityEngine::InputSystem::XR::FeatureType, ::Array<::UnityEngine::InputSystem::XR::FeatureType>*> getStaticF_poseSubControlTypes();

  static inline void setStaticF_poseSubControlNames(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline void setStaticF_poseSubControlTypes(::ArrayW<::UnityEngine::InputSystem::XR::FeatureType, ::Array<::UnityEngine::InputSystem::XR::FeatureType>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XRLayoutBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XRLayoutBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XRLayoutBuilder(XRLayoutBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XRLayoutBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XRLayoutBuilder(XRLayoutBuilder const&) = delete;

  /// @brief Field parentLayout, offset: 0x10, size: 0x8, def value: None
  ::StringW ___parentLayout;

  /// @brief Field interfaceName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___interfaceName;

  /// @brief Field descriptor, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::InputSystem::XR::XRDeviceDescriptor* ___descriptor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::XRLayoutBuilder, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::XRLayoutBuilder, ___parentLayout) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::XRLayoutBuilder, ___interfaceName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::XRLayoutBuilder, ___descriptor) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::XR
NEED_NO_BOX(::UnityEngine::InputSystem::XR::XRLayoutBuilder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::XRLayoutBuilder*, "UnityEngine.InputSystem.XR", "XRLayoutBuilder");
NEED_NO_BOX(::UnityEngine::InputSystem::XR::__XRLayoutBuilder____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::__XRLayoutBuilder____c__DisplayClass5_0*, "UnityEngine.InputSystem.XR", "XRLayoutBuilder/<>c__DisplayClass5_0");

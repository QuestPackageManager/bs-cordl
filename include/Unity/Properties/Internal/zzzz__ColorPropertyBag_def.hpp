#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/ColorPropertyBag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColorPropertyBag)
namespace Unity::Properties::Internal {
class __ColorPropertyBag__AProperty;
}
namespace Unity::Properties::Internal {
class __ColorPropertyBag__BProperty;
}
namespace Unity::Properties::Internal {
class __ColorPropertyBag__GProperty;
}
namespace Unity::Properties::Internal {
class __ColorPropertyBag__RProperty;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class ColorPropertyBag;
}
namespace Unity::Properties::Internal {
class __ColorPropertyBag__AProperty;
}
namespace Unity::Properties::Internal {
class __ColorPropertyBag__BProperty;
}
namespace Unity::Properties::Internal {
class __ColorPropertyBag__GProperty;
}
namespace Unity::Properties::Internal {
class __ColorPropertyBag__RProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::ColorPropertyBag);
MARK_REF_PTR_T(::Unity::Properties::Internal::__ColorPropertyBag__AProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::__ColorPropertyBag__BProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::__ColorPropertyBag__GProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::__ColorPropertyBag__RProperty);
// Type: ::RProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::ColorPropertyBag::RProperty*
class CORDL_TYPE __ColorPropertyBag__RProperty : public ::Unity::Properties::Property_2<::UnityEngine::Color, float_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__ColorPropertyBag__RProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489ad84, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489aea4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ColorPropertyBag__RProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ColorPropertyBag__RProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ColorPropertyBag__RProperty(__ColorPropertyBag__RProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ColorPropertyBag__RProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ColorPropertyBag__RProperty(__ColorPropertyBag__RProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17434 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__ColorPropertyBag__RProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: ::GProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::ColorPropertyBag::GProperty*
class CORDL_TYPE __ColorPropertyBag__GProperty : public ::Unity::Properties::Property_2<::UnityEngine::Color, float_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__ColorPropertyBag__GProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489adcc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489aee4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ColorPropertyBag__GProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ColorPropertyBag__GProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ColorPropertyBag__GProperty(__ColorPropertyBag__GProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ColorPropertyBag__GProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ColorPropertyBag__GProperty(__ColorPropertyBag__GProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17435 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__ColorPropertyBag__GProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: ::BProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::ColorPropertyBag::BProperty*
class CORDL_TYPE __ColorPropertyBag__BProperty : public ::Unity::Properties::Property_2<::UnityEngine::Color, float_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__ColorPropertyBag__BProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489ae14, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489af24, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ColorPropertyBag__BProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ColorPropertyBag__BProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ColorPropertyBag__BProperty(__ColorPropertyBag__BProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ColorPropertyBag__BProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ColorPropertyBag__BProperty(__ColorPropertyBag__BProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17436 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__ColorPropertyBag__BProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: ::AProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::ColorPropertyBag::AProperty*
class CORDL_TYPE __ColorPropertyBag__AProperty : public ::Unity::Properties::Property_2<::UnityEngine::Color, float_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__ColorPropertyBag__AProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489ae5c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489af64, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ColorPropertyBag__AProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ColorPropertyBag__AProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ColorPropertyBag__AProperty(__ColorPropertyBag__AProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ColorPropertyBag__AProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ColorPropertyBag__AProperty(__ColorPropertyBag__AProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17437 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__ColorPropertyBag__AProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: Unity.Properties.Internal::ColorPropertyBag
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Unity.Properties.Internal::ColorPropertyBag*
class CORDL_TYPE ColorPropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::Color> {
public:
  // Declarations
  using AProperty = ::Unity::Properties::Internal::__ColorPropertyBag__AProperty;

  using BProperty = ::Unity::Properties::Internal::__ColorPropertyBag__BProperty;

  using GProperty = ::Unity::Properties::Internal::__ColorPropertyBag__GProperty;

  using RProperty = ::Unity::Properties::Internal::__ColorPropertyBag__RProperty;

  static inline ::Unity::Properties::Internal::ColorPropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x489a08c, size 0x160, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorPropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorPropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorPropertyBag(ColorPropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorPropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorPropertyBag(ColorPropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17438 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::ColorPropertyBag, 0x28>, "Size mismatch!");

} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::ColorPropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::ColorPropertyBag*, "Unity.Properties.Internal", "ColorPropertyBag");
NEED_NO_BOX(::Unity::Properties::Internal::__ColorPropertyBag__AProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__ColorPropertyBag__AProperty*, "Unity.Properties.Internal", "ColorPropertyBag/AProperty");
NEED_NO_BOX(::Unity::Properties::Internal::__ColorPropertyBag__BProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__ColorPropertyBag__BProperty*, "Unity.Properties.Internal", "ColorPropertyBag/BProperty");
NEED_NO_BOX(::Unity::Properties::Internal::__ColorPropertyBag__GProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__ColorPropertyBag__GProperty*, "Unity.Properties.Internal", "ColorPropertyBag/GProperty");
NEED_NO_BOX(::Unity::Properties::Internal::__ColorPropertyBag__RProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__ColorPropertyBag__RProperty*, "Unity.Properties.Internal", "ColorPropertyBag/RProperty");

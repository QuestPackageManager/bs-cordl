#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/Vector4PropertyBag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector4PropertyBag)
namespace Unity::Properties::Internal {
class __Vector4PropertyBag__WProperty;
}
namespace Unity::Properties::Internal {
class __Vector4PropertyBag__XProperty;
}
namespace Unity::Properties::Internal {
class __Vector4PropertyBag__YProperty;
}
namespace Unity::Properties::Internal {
class __Vector4PropertyBag__ZProperty;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class Vector4PropertyBag;
}
namespace Unity::Properties::Internal {
class __Vector4PropertyBag__WProperty;
}
namespace Unity::Properties::Internal {
class __Vector4PropertyBag__XProperty;
}
namespace Unity::Properties::Internal {
class __Vector4PropertyBag__YProperty;
}
namespace Unity::Properties::Internal {
class __Vector4PropertyBag__ZProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::Vector4PropertyBag);
MARK_REF_PTR_T(::Unity::Properties::Internal::__Vector4PropertyBag__WProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::__Vector4PropertyBag__XProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::__Vector4PropertyBag__YProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::__Vector4PropertyBag__ZProperty);
// Type: ::XProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Vector4PropertyBag::XProperty*
class CORDL_TYPE __Vector4PropertyBag__XProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector4, float_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__Vector4PropertyBag__XProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489b24c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489b36c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Vector4PropertyBag__XProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Vector4PropertyBag__XProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Vector4PropertyBag__XProperty(__Vector4PropertyBag__XProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Vector4PropertyBag__XProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Vector4PropertyBag__XProperty(__Vector4PropertyBag__XProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17446 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__Vector4PropertyBag__XProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: ::YProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Vector4PropertyBag::YProperty*
class CORDL_TYPE __Vector4PropertyBag__YProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector4, float_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__Vector4PropertyBag__YProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489b294, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489b3ac, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Vector4PropertyBag__YProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Vector4PropertyBag__YProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Vector4PropertyBag__YProperty(__Vector4PropertyBag__YProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Vector4PropertyBag__YProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Vector4PropertyBag__YProperty(__Vector4PropertyBag__YProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17447 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__Vector4PropertyBag__YProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: ::ZProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Vector4PropertyBag::ZProperty*
class CORDL_TYPE __Vector4PropertyBag__ZProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector4, float_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__Vector4PropertyBag__ZProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489b2dc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489b3ec, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Vector4PropertyBag__ZProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Vector4PropertyBag__ZProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Vector4PropertyBag__ZProperty(__Vector4PropertyBag__ZProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Vector4PropertyBag__ZProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Vector4PropertyBag__ZProperty(__Vector4PropertyBag__ZProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17448 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__Vector4PropertyBag__ZProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: ::WProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Vector4PropertyBag::WProperty*
class CORDL_TYPE __Vector4PropertyBag__WProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector4, float_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__Vector4PropertyBag__WProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489b324, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489b42c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Vector4PropertyBag__WProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Vector4PropertyBag__WProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Vector4PropertyBag__WProperty(__Vector4PropertyBag__WProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Vector4PropertyBag__WProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Vector4PropertyBag__WProperty(__Vector4PropertyBag__WProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17449 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__Vector4PropertyBag__WProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: Unity.Properties.Internal::Vector4PropertyBag
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Unity.Properties.Internal::Vector4PropertyBag*
class CORDL_TYPE Vector4PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::Vector4> {
public:
  // Declarations
  using WProperty = ::Unity::Properties::Internal::__Vector4PropertyBag__WProperty;

  using XProperty = ::Unity::Properties::Internal::__Vector4PropertyBag__XProperty;

  using YProperty = ::Unity::Properties::Internal::__Vector4PropertyBag__YProperty;

  using ZProperty = ::Unity::Properties::Internal::__Vector4PropertyBag__ZProperty;

  static inline ::Unity::Properties::Internal::Vector4PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x489a408, size 0x160, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector4PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector4PropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector4PropertyBag(Vector4PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector4PropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector4PropertyBag(Vector4PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17450 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::Vector4PropertyBag, 0x28>, "Size mismatch!");

} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::Vector4PropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::Vector4PropertyBag*, "Unity.Properties.Internal", "Vector4PropertyBag");
NEED_NO_BOX(::Unity::Properties::Internal::__Vector4PropertyBag__WProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__Vector4PropertyBag__WProperty*, "Unity.Properties.Internal", "Vector4PropertyBag/WProperty");
NEED_NO_BOX(::Unity::Properties::Internal::__Vector4PropertyBag__XProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__Vector4PropertyBag__XProperty*, "Unity.Properties.Internal", "Vector4PropertyBag/XProperty");
NEED_NO_BOX(::Unity::Properties::Internal::__Vector4PropertyBag__YProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__Vector4PropertyBag__YProperty*, "Unity.Properties.Internal", "Vector4PropertyBag/YProperty");
NEED_NO_BOX(::Unity::Properties::Internal::__Vector4PropertyBag__ZProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__Vector4PropertyBag__ZProperty*, "Unity.Properties.Internal", "Vector4PropertyBag/ZProperty");

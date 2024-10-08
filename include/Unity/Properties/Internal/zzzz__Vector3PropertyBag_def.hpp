#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/Vector3PropertyBag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector3PropertyBag)
namespace Unity::Properties::Internal {
class __Vector3PropertyBag__XProperty;
}
namespace Unity::Properties::Internal {
class __Vector3PropertyBag__YProperty;
}
namespace Unity::Properties::Internal {
class __Vector3PropertyBag__ZProperty;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class Vector3PropertyBag;
}
namespace Unity::Properties::Internal {
class __Vector3PropertyBag__XProperty;
}
namespace Unity::Properties::Internal {
class __Vector3PropertyBag__YProperty;
}
namespace Unity::Properties::Internal {
class __Vector3PropertyBag__ZProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::Vector3PropertyBag);
MARK_REF_PTR_T(::Unity::Properties::Internal::__Vector3PropertyBag__XProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::__Vector3PropertyBag__YProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::__Vector3PropertyBag__ZProperty);
// Type: ::XProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Vector3PropertyBag::XProperty*
class CORDL_TYPE __Vector3PropertyBag__XProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector3, float_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__Vector3PropertyBag__XProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489b0b4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489b18c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Vector3PropertyBag__XProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Vector3PropertyBag__XProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Vector3PropertyBag__XProperty(__Vector3PropertyBag__XProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Vector3PropertyBag__XProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Vector3PropertyBag__XProperty(__Vector3PropertyBag__XProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17442 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__Vector3PropertyBag__XProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: ::YProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Vector3PropertyBag::YProperty*
class CORDL_TYPE __Vector3PropertyBag__YProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector3, float_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__Vector3PropertyBag__YProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489b0fc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489b1cc, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Vector3PropertyBag__YProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Vector3PropertyBag__YProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Vector3PropertyBag__YProperty(__Vector3PropertyBag__YProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Vector3PropertyBag__YProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Vector3PropertyBag__YProperty(__Vector3PropertyBag__YProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17443 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__Vector3PropertyBag__YProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: ::ZProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Vector3PropertyBag::ZProperty*
class CORDL_TYPE __Vector3PropertyBag__ZProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector3, float_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__Vector3PropertyBag__ZProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489b144, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489b20c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Vector3PropertyBag__ZProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Vector3PropertyBag__ZProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Vector3PropertyBag__ZProperty(__Vector3PropertyBag__ZProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Vector3PropertyBag__ZProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Vector3PropertyBag__ZProperty(__Vector3PropertyBag__ZProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17444 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__Vector3PropertyBag__ZProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: Unity.Properties.Internal::Vector3PropertyBag
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Unity.Properties.Internal::Vector3PropertyBag*
class CORDL_TYPE Vector3PropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::Vector3> {
public:
  // Declarations
  using XProperty = ::Unity::Properties::Internal::__Vector3PropertyBag__XProperty;

  using YProperty = ::Unity::Properties::Internal::__Vector3PropertyBag__YProperty;

  using ZProperty = ::Unity::Properties::Internal::__Vector3PropertyBag__ZProperty;

  static inline ::Unity::Properties::Internal::Vector3PropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x489a2dc, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3PropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3PropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3PropertyBag(Vector3PropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3PropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3PropertyBag(Vector3PropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17445 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::Vector3PropertyBag, 0x28>, "Size mismatch!");

} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::Vector3PropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::Vector3PropertyBag*, "Unity.Properties.Internal", "Vector3PropertyBag");
NEED_NO_BOX(::Unity::Properties::Internal::__Vector3PropertyBag__XProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__Vector3PropertyBag__XProperty*, "Unity.Properties.Internal", "Vector3PropertyBag/XProperty");
NEED_NO_BOX(::Unity::Properties::Internal::__Vector3PropertyBag__YProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__Vector3PropertyBag__YProperty*, "Unity.Properties.Internal", "Vector3PropertyBag/YProperty");
NEED_NO_BOX(::Unity::Properties::Internal::__Vector3PropertyBag__ZProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__Vector3PropertyBag__ZProperty*, "Unity.Properties.Internal", "Vector3PropertyBag/ZProperty");

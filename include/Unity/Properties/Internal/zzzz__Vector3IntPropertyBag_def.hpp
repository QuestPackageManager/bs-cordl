#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/Vector3IntPropertyBag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Vector3IntPropertyBag)
namespace Unity::Properties::Internal {
class __Vector3IntPropertyBag__XProperty;
}
namespace Unity::Properties::Internal {
class __Vector3IntPropertyBag__YProperty;
}
namespace Unity::Properties::Internal {
class __Vector3IntPropertyBag__ZProperty;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class Vector3IntPropertyBag;
}
namespace Unity::Properties::Internal {
class __Vector3IntPropertyBag__XProperty;
}
namespace Unity::Properties::Internal {
class __Vector3IntPropertyBag__YProperty;
}
namespace Unity::Properties::Internal {
class __Vector3IntPropertyBag__ZProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::Vector3IntPropertyBag);
MARK_REF_PTR_T(::Unity::Properties::Internal::__Vector3IntPropertyBag__XProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::__Vector3IntPropertyBag__YProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::__Vector3IntPropertyBag__ZProperty);
// Type: ::XProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Vector3IntPropertyBag::XProperty*
class CORDL_TYPE __Vector3IntPropertyBag__XProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector3Int, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__Vector3IntPropertyBag__XProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489b57c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489b654, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Vector3IntPropertyBag__XProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Vector3IntPropertyBag__XProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Vector3IntPropertyBag__XProperty(__Vector3IntPropertyBag__XProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Vector3IntPropertyBag__XProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Vector3IntPropertyBag__XProperty(__Vector3IntPropertyBag__XProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17454 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__Vector3IntPropertyBag__XProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: ::YProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Vector3IntPropertyBag::YProperty*
class CORDL_TYPE __Vector3IntPropertyBag__YProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector3Int, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__Vector3IntPropertyBag__YProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489b5c4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489b694, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Vector3IntPropertyBag__YProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Vector3IntPropertyBag__YProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Vector3IntPropertyBag__YProperty(__Vector3IntPropertyBag__YProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Vector3IntPropertyBag__YProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Vector3IntPropertyBag__YProperty(__Vector3IntPropertyBag__YProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17455 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__Vector3IntPropertyBag__YProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: ::ZProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Vector3IntPropertyBag::ZProperty*
class CORDL_TYPE __Vector3IntPropertyBag__ZProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector3Int, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__Vector3IntPropertyBag__ZProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489b60c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489b6d4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Vector3IntPropertyBag__ZProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Vector3IntPropertyBag__ZProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Vector3IntPropertyBag__ZProperty(__Vector3IntPropertyBag__ZProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Vector3IntPropertyBag__ZProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Vector3IntPropertyBag__ZProperty(__Vector3IntPropertyBag__ZProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17456 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__Vector3IntPropertyBag__ZProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: Unity.Properties.Internal::Vector3IntPropertyBag
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Unity.Properties.Internal::Vector3IntPropertyBag*
class CORDL_TYPE Vector3IntPropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::Vector3Int> {
public:
  // Declarations
  using XProperty = ::Unity::Properties::Internal::__Vector3IntPropertyBag__XProperty;

  using YProperty = ::Unity::Properties::Internal::__Vector3IntPropertyBag__YProperty;

  using ZProperty = ::Unity::Properties::Internal::__Vector3IntPropertyBag__ZProperty;

  static inline ::Unity::Properties::Internal::Vector3IntPropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x489a658, size 0x12c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector3IntPropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector3IntPropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector3IntPropertyBag(Vector3IntPropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector3IntPropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector3IntPropertyBag(Vector3IntPropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17457 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::Vector3IntPropertyBag, 0x28>, "Size mismatch!");

} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::Vector3IntPropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::Vector3IntPropertyBag*, "Unity.Properties.Internal", "Vector3IntPropertyBag");
NEED_NO_BOX(::Unity::Properties::Internal::__Vector3IntPropertyBag__XProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__Vector3IntPropertyBag__XProperty*, "Unity.Properties.Internal", "Vector3IntPropertyBag/XProperty");
NEED_NO_BOX(::Unity::Properties::Internal::__Vector3IntPropertyBag__YProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__Vector3IntPropertyBag__YProperty*, "Unity.Properties.Internal", "Vector3IntPropertyBag/YProperty");
NEED_NO_BOX(::Unity::Properties::Internal::__Vector3IntPropertyBag__ZProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__Vector3IntPropertyBag__ZProperty*, "Unity.Properties.Internal", "Vector3IntPropertyBag/ZProperty");

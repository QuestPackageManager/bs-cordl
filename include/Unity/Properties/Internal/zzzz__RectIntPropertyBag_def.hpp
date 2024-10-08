#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/RectIntPropertyBag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RectIntPropertyBag)
namespace Unity::Properties::Internal {
class __RectIntPropertyBag__HeightProperty;
}
namespace Unity::Properties::Internal {
class __RectIntPropertyBag__WidthProperty;
}
namespace Unity::Properties::Internal {
class __RectIntPropertyBag__XProperty;
}
namespace Unity::Properties::Internal {
class __RectIntPropertyBag__YProperty;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class RectIntPropertyBag;
}
namespace Unity::Properties::Internal {
class __RectIntPropertyBag__HeightProperty;
}
namespace Unity::Properties::Internal {
class __RectIntPropertyBag__WidthProperty;
}
namespace Unity::Properties::Internal {
class __RectIntPropertyBag__XProperty;
}
namespace Unity::Properties::Internal {
class __RectIntPropertyBag__YProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::RectIntPropertyBag);
MARK_REF_PTR_T(::Unity::Properties::Internal::__RectIntPropertyBag__HeightProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::__RectIntPropertyBag__WidthProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::__RectIntPropertyBag__XProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::__RectIntPropertyBag__YProperty);
// Type: ::XProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::RectIntPropertyBag::XProperty*
class CORDL_TYPE __RectIntPropertyBag__XProperty : public ::Unity::Properties::Property_2<::UnityEngine::RectInt, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__RectIntPropertyBag__XProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489b934, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489ba54, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RectIntPropertyBag__XProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RectIntPropertyBag__XProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RectIntPropertyBag__XProperty(__RectIntPropertyBag__XProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RectIntPropertyBag__XProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RectIntPropertyBag__XProperty(__RectIntPropertyBag__XProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17463 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__RectIntPropertyBag__XProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: ::YProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::RectIntPropertyBag::YProperty*
class CORDL_TYPE __RectIntPropertyBag__YProperty : public ::Unity::Properties::Property_2<::UnityEngine::RectInt, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__RectIntPropertyBag__YProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489b97c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489ba94, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RectIntPropertyBag__YProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RectIntPropertyBag__YProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RectIntPropertyBag__YProperty(__RectIntPropertyBag__YProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RectIntPropertyBag__YProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RectIntPropertyBag__YProperty(__RectIntPropertyBag__YProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17464 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__RectIntPropertyBag__YProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: ::WidthProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::RectIntPropertyBag::WidthProperty*
class CORDL_TYPE __RectIntPropertyBag__WidthProperty : public ::Unity::Properties::Property_2<::UnityEngine::RectInt, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__RectIntPropertyBag__WidthProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489b9c4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489bad4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RectIntPropertyBag__WidthProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RectIntPropertyBag__WidthProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RectIntPropertyBag__WidthProperty(__RectIntPropertyBag__WidthProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RectIntPropertyBag__WidthProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RectIntPropertyBag__WidthProperty(__RectIntPropertyBag__WidthProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17465 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__RectIntPropertyBag__WidthProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: ::HeightProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::RectIntPropertyBag::HeightProperty*
class CORDL_TYPE __RectIntPropertyBag__HeightProperty : public ::Unity::Properties::Property_2<::UnityEngine::RectInt, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__RectIntPropertyBag__HeightProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489ba0c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489bb14, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RectIntPropertyBag__HeightProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RectIntPropertyBag__HeightProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RectIntPropertyBag__HeightProperty(__RectIntPropertyBag__HeightProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RectIntPropertyBag__HeightProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RectIntPropertyBag__HeightProperty(__RectIntPropertyBag__HeightProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17466 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__RectIntPropertyBag__HeightProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: Unity.Properties.Internal::RectIntPropertyBag
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Unity.Properties.Internal::RectIntPropertyBag*
class CORDL_TYPE RectIntPropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::RectInt> {
public:
  // Declarations
  using HeightProperty = ::Unity::Properties::Internal::__RectIntPropertyBag__HeightProperty;

  using WidthProperty = ::Unity::Properties::Internal::__RectIntPropertyBag__WidthProperty;

  using XProperty = ::Unity::Properties::Internal::__RectIntPropertyBag__XProperty;

  using YProperty = ::Unity::Properties::Internal::__RectIntPropertyBag__YProperty;

  static inline ::Unity::Properties::Internal::RectIntPropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x489a8e4, size 0x160, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectIntPropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectIntPropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectIntPropertyBag(RectIntPropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectIntPropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectIntPropertyBag(RectIntPropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17467 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::RectIntPropertyBag, 0x28>, "Size mismatch!");

} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::RectIntPropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::RectIntPropertyBag*, "Unity.Properties.Internal", "RectIntPropertyBag");
NEED_NO_BOX(::Unity::Properties::Internal::__RectIntPropertyBag__HeightProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__RectIntPropertyBag__HeightProperty*, "Unity.Properties.Internal", "RectIntPropertyBag/HeightProperty");
NEED_NO_BOX(::Unity::Properties::Internal::__RectIntPropertyBag__WidthProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__RectIntPropertyBag__WidthProperty*, "Unity.Properties.Internal", "RectIntPropertyBag/WidthProperty");
NEED_NO_BOX(::Unity::Properties::Internal::__RectIntPropertyBag__XProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__RectIntPropertyBag__XProperty*, "Unity.Properties.Internal", "RectIntPropertyBag/XProperty");
NEED_NO_BOX(::Unity::Properties::Internal::__RectIntPropertyBag__YProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__RectIntPropertyBag__YProperty*, "Unity.Properties.Internal", "RectIntPropertyBag/YProperty");

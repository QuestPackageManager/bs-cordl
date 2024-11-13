#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/RectPropertyBag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RectPropertyBag)
namespace Unity::Properties::Internal {
class __RectPropertyBag__HeightProperty;
}
namespace Unity::Properties::Internal {
class __RectPropertyBag__WidthProperty;
}
namespace Unity::Properties::Internal {
class __RectPropertyBag__XProperty;
}
namespace Unity::Properties::Internal {
class __RectPropertyBag__YProperty;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class RectPropertyBag;
}
namespace Unity::Properties::Internal {
class __RectPropertyBag__HeightProperty;
}
namespace Unity::Properties::Internal {
class __RectPropertyBag__WidthProperty;
}
namespace Unity::Properties::Internal {
class __RectPropertyBag__XProperty;
}
namespace Unity::Properties::Internal {
class __RectPropertyBag__YProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::RectPropertyBag);
MARK_REF_PTR_T(::Unity::Properties::Internal::__RectPropertyBag__HeightProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::__RectPropertyBag__WidthProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::__RectPropertyBag__XProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::__RectPropertyBag__YProperty);
// Type: ::XProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::RectPropertyBag::XProperty*
class CORDL_TYPE __RectPropertyBag__XProperty : public ::Unity::Properties::Property_2<::UnityEngine::Rect, float_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__RectPropertyBag__XProperty* New_ctor();

  /// @brief Method .ctor, addr 0x48afe2c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x48aff4c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RectPropertyBag__XProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RectPropertyBag__XProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RectPropertyBag__XProperty(__RectPropertyBag__XProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RectPropertyBag__XProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RectPropertyBag__XProperty(__RectPropertyBag__XProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17465 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__RectPropertyBag__XProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: ::YProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::RectPropertyBag::YProperty*
class CORDL_TYPE __RectPropertyBag__YProperty : public ::Unity::Properties::Property_2<::UnityEngine::Rect, float_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__RectPropertyBag__YProperty* New_ctor();

  /// @brief Method .ctor, addr 0x48afe74, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x48aff8c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RectPropertyBag__YProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RectPropertyBag__YProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RectPropertyBag__YProperty(__RectPropertyBag__YProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RectPropertyBag__YProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RectPropertyBag__YProperty(__RectPropertyBag__YProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17466 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__RectPropertyBag__YProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: ::WidthProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::RectPropertyBag::WidthProperty*
class CORDL_TYPE __RectPropertyBag__WidthProperty : public ::Unity::Properties::Property_2<::UnityEngine::Rect, float_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__RectPropertyBag__WidthProperty* New_ctor();

  /// @brief Method .ctor, addr 0x48afebc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x48affcc, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RectPropertyBag__WidthProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RectPropertyBag__WidthProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RectPropertyBag__WidthProperty(__RectPropertyBag__WidthProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RectPropertyBag__WidthProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RectPropertyBag__WidthProperty(__RectPropertyBag__WidthProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17467 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__RectPropertyBag__WidthProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: ::HeightProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::RectPropertyBag::HeightProperty*
class CORDL_TYPE __RectPropertyBag__HeightProperty : public ::Unity::Properties::Property_2<::UnityEngine::Rect, float_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__RectPropertyBag__HeightProperty* New_ctor();

  /// @brief Method .ctor, addr 0x48aff04, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x48b000c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __RectPropertyBag__HeightProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__RectPropertyBag__HeightProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __RectPropertyBag__HeightProperty(__RectPropertyBag__HeightProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__RectPropertyBag__HeightProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __RectPropertyBag__HeightProperty(__RectPropertyBag__HeightProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17468 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__RectPropertyBag__HeightProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: Unity.Properties.Internal::RectPropertyBag
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Unity.Properties.Internal::RectPropertyBag*
class CORDL_TYPE RectPropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::Rect> {
public:
  // Declarations
  using HeightProperty = ::Unity::Properties::Internal::__RectPropertyBag__HeightProperty;

  using WidthProperty = ::Unity::Properties::Internal::__RectPropertyBag__WidthProperty;

  using XProperty = ::Unity::Properties::Internal::__RectPropertyBag__XProperty;

  using YProperty = ::Unity::Properties::Internal::__RectPropertyBag__YProperty;

  static inline ::Unity::Properties::Internal::RectPropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x48aee9c, size 0x160, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RectPropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RectPropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RectPropertyBag(RectPropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RectPropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RectPropertyBag(RectPropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17469 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::RectPropertyBag, 0x28>, "Size mismatch!");

} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::RectPropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::RectPropertyBag*, "Unity.Properties.Internal", "RectPropertyBag");
NEED_NO_BOX(::Unity::Properties::Internal::__RectPropertyBag__HeightProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__RectPropertyBag__HeightProperty*, "Unity.Properties.Internal", "RectPropertyBag/HeightProperty");
NEED_NO_BOX(::Unity::Properties::Internal::__RectPropertyBag__WidthProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__RectPropertyBag__WidthProperty*, "Unity.Properties.Internal", "RectPropertyBag/WidthProperty");
NEED_NO_BOX(::Unity::Properties::Internal::__RectPropertyBag__XProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__RectPropertyBag__XProperty*, "Unity.Properties.Internal", "RectPropertyBag/XProperty");
NEED_NO_BOX(::Unity::Properties::Internal::__RectPropertyBag__YProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__RectPropertyBag__YProperty*, "Unity.Properties.Internal", "RectPropertyBag/YProperty");

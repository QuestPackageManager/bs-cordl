#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/NativeTypes/XrBoxf.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrExtent3Df_def.hpp"
#include "UnityEngine/XR/OpenXR/NativeTypes/zzzz__XrPosef_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XrBoxf)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrExtent3Df;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrPosef;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrBoxf;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf, "UnityEngine.XR.OpenXR.NativeTypes", "XrBoxf");
// [IsReadOnly]
// Dependencies UnityEngine.XR.OpenXR.NativeTypes.XrExtent3Df, UnityEngine.XR.OpenXR.NativeTypes.XrPosef
namespace UnityEngine::XR::OpenXR::NativeTypes {
// Is value type: true
// CS Name: UnityEngine.XR.OpenXR.NativeTypes.XrBoxf
struct CORDL_TYPE XrBoxf {
public:
  // Declarations
  __declspec(property(get = get_center)) ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef center;

  __declspec(property(get = get_extents)) ::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df extents;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>*();

  /// @brief Method Equals, addr 0x6e48d4c, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6e48c0c, size 0x84, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf other);

  /// @brief Method GetHashCode, addr 0x6e48de0, size 0xc4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x6e48be8, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef center, ::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df extents);

  /// [CompilerGenerated]
  /// @brief Method get_center, addr 0x6e48bc8, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef get_center();

  /// [CompilerGenerated]
  /// @brief Method get_extents, addr 0x6e48bdc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df get_extents();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>"
  constexpr ::System::IEquatable_1<::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf>* i___System__IEquatable_1___UnityEngine__XR__OpenXR__NativeTypes__XrBoxf_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr XrBoxf();

  // Ctor Parameters [CppParam { name: "_center_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrPosef", modifiers: "", def_value: None, comment: None }, CppParam { name:
  // "_extents_k__BackingField", ty: "::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df", modifiers: "", def_value: None, comment: None }]
  constexpr XrBoxf(::UnityEngine::XR::OpenXR::NativeTypes::XrPosef _center_k__BackingField, ::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df _extents_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17597 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// [CompilerGenerated]
  /// @brief Field <center>k__BackingField, offset: 0x0, size: 0x1c, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrPosef _center_k__BackingField;

  /// [CompilerGenerated]
  /// @brief Field <extents>k__BackingField, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::XR::OpenXR::NativeTypes::XrExtent3Df _extents_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf, _center_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf, _extents_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::NativeTypes::XrBoxf) == 0x28, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR::NativeTypes

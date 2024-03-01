#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TMPro_ExtensionMethods)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace TMPro {
class TMPro_ExtensionMethods;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMPro_ExtensionMethods);
// Type: TMPro::TMPro_ExtensionMethods
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// CS Name: ::TMPro::TMPro_ExtensionMethods*
class CORDL_TYPE TMPro_ExtensionMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method ArrayToString, addr 0x2ce714c, size 0xac, virtual false, abstract: false, final false
  static inline ::StringW ArrayToString(::ArrayW<char16_t, ::Array<char16_t>*> chars);

  /// @brief Method Compare, addr 0x2ce74b8, size 0x30, virtual false, abstract: false, final false
  static inline bool Compare(::UnityEngine::Color a, ::UnityEngine::Color b);

  /// @brief Method Compare, addr 0x2ce7498, size 0x10, virtual false, abstract: false, final false
  static inline bool Compare(::UnityEngine::Color32 a, ::UnityEngine::Color32 b);

  /// @brief Method Compare, addr 0x2ce780c, size 0xc0, virtual false, abstract: false, final false
  static inline bool Compare(::UnityEngine::Quaternion q1, ::UnityEngine::Quaternion q2, int32_t accuracy);

  /// @brief Method Compare, addr 0x2ce7778, size 0x94, virtual false, abstract: false, final false
  static inline bool Compare(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, int32_t accuracy);

  /// @brief Method CompareRGB, addr 0x2ce74e8, size 0x28, virtual false, abstract: false, final false
  static inline bool CompareRGB(::UnityEngine::Color a, ::UnityEngine::Color b);

  /// @brief Method CompareRGB, addr 0x2ce74a8, size 0x10, virtual false, abstract: false, final false
  static inline bool CompareRGB(::UnityEngine::Color32 a, ::UnityEngine::Color32 b);

  /// @brief Method FindInstanceID, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t FindInstanceID(::System::Collections::Generic::List_1<T>* list, T target);

  /// @brief Method IntToString, addr 0x2ce71f8, size 0xb0, virtual false, abstract: false, final false
  static inline ::StringW IntToString(::ArrayW<int32_t, ::Array<int32_t>*> unicodes);

  /// @brief Method IntToString, addr 0x2ce7380, size 0x118, virtual false, abstract: false, final false
  static inline ::StringW IntToString(::ArrayW<int32_t, ::Array<int32_t>*> unicodes, int32_t start, int32_t length);

  /// @brief Method MinAlpha, addr 0x2ce776c, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color MinAlpha(::UnityEngine::Color c1, ::UnityEngine::Color c2);

  /// @brief Method Multiply, addr 0x2ce7510, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color32 Multiply(::UnityEngine::Color32 c1, ::UnityEngine::Color32 c2);

  /// @brief Method Tint, addr 0x2ce75d0, size 0xc0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color32 Tint(::UnityEngine::Color32 c1, ::UnityEngine::Color32 c2);

  /// @brief Method Tint, addr 0x2ce7690, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color32 Tint(::UnityEngine::Color32 c1, float_t tint);

  /// @brief Method ToIntArray, addr 0x2ce7098, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> ToIntArray(::StringW text);

  /// @brief Method UintToString, addr 0x2ce72a8, size 0xd8, virtual false, abstract: false, final false
  static inline ::StringW UintToString(::System::Collections::Generic::List_1<uint32_t>* unicodes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMPro_ExtensionMethods();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TMPro_ExtensionMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMPro_ExtensionMethods(TMPro_ExtensionMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMPro_ExtensionMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMPro_ExtensionMethods(TMPro_ExtensionMethods const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMPro_ExtensionMethods, 0x10>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMPro_ExtensionMethods);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMPro_ExtensionMethods*, "TMPro", "TMPro_ExtensionMethods");

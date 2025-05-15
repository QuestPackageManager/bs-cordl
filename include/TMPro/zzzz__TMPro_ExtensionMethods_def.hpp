#pragma once
// IWYU pragma private; include "TMPro/TMPro_ExtensionMethods.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
// Dependencies System.Object
namespace TMPro {
// Is value type: false
// CS Name: TMPro.TMPro_ExtensionMethods
class CORDL_TYPE TMPro_ExtensionMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method ArrayToString, addr 0x47c4fe4, size 0xe8, virtual false, abstract: false, final false
  static inline ::StringW ArrayToString(::ArrayW<char16_t, ::Array<char16_t>*> chars);

  /// @brief Method Compare, addr 0x47c5384, size 0x28, virtual false, abstract: false, final false
  static inline bool Compare(::UnityEngine::Color a, ::UnityEngine::Color b);

  /// @brief Method Compare, addr 0x47c5364, size 0x10, virtual false, abstract: false, final false
  static inline bool Compare(::UnityEngine::Color32 a, ::UnityEngine::Color32 b);

  /// @brief Method Compare, addr 0x47c56b8, size 0xc0, virtual false, abstract: false, final false
  static inline bool Compare(::UnityEngine::Quaternion q1, ::UnityEngine::Quaternion q2, int32_t accuracy);

  /// @brief Method Compare, addr 0x47c5624, size 0x94, virtual false, abstract: false, final false
  static inline bool Compare(::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2, int32_t accuracy);

  /// @brief Method CompareRGB, addr 0x47c53ac, size 0x20, virtual false, abstract: false, final false
  static inline bool CompareRGB(::UnityEngine::Color a, ::UnityEngine::Color b);

  /// @brief Method CompareRGB, addr 0x47c5374, size 0x10, virtual false, abstract: false, final false
  static inline bool CompareRGB(::UnityEngine::Color32 a, ::UnityEngine::Color32 b);

  /// @brief Method FindInstanceID, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t FindInstanceID(::System::Collections::Generic::List_1<T>* list, T target);

  /// @brief Method IntToString, addr 0x47c50cc, size 0xb0, virtual false, abstract: false, final false
  static inline ::StringW IntToString(::ArrayW<int32_t, ::Array<int32_t>*> unicodes);

  /// @brief Method IntToString, addr 0x47c5254, size 0x110, virtual false, abstract: false, final false
  static inline ::StringW IntToString(::ArrayW<int32_t, ::Array<int32_t>*> unicodes, int32_t start, int32_t length);

  /// @brief Method MinAlpha, addr 0x47c5618, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color MinAlpha(::UnityEngine::Color c1, ::UnityEngine::Color c2);

  /// @brief Method Multiply, addr 0x47c53cc, size 0xb8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color32 Multiply(::UnityEngine::Color32 c1, ::UnityEngine::Color32 c2);

  /// @brief Method Tint, addr 0x47c5484, size 0xb8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color32 Tint(::UnityEngine::Color32 c1, ::UnityEngine::Color32 c2);

  /// @brief Method Tint, addr 0x47c553c, size 0xdc, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color32 Tint(::UnityEngine::Color32 c1, float_t tint);

  /// @brief Method ToIntArray, addr 0x47c4f30, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> ToIntArray(::StringW text);

  /// @brief Method UintToString, addr 0x47c517c, size 0xd8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14436 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMPro_ExtensionMethods, 0x10>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMPro_ExtensionMethods);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMPro_ExtensionMethods*, "TMPro", "TMPro_ExtensionMethods");

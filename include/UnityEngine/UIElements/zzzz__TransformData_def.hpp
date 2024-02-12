#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Rotate_def.hpp"
#include "UnityEngine/UIElements/zzzz__Scale_def.hpp"
#include "UnityEngine/UIElements/zzzz__TransformOrigin_def.hpp"
#include "UnityEngine/UIElements/zzzz__Translate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformData)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
template <typename T> class IStyleDataGroup_1;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace UnityEngine::UIElements {
struct Translate;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TransformData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TransformData);
// Type: UnityEngine.UIElements::TransformData
// SizeInfo { instance_size: 84, native_size: 84, calculated_instance_size: 84, calculated_native_size: 100, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6554)), TypeDefinitionIndex(TypeDefinitionIndex(6561)), TypeDefinitionIndex(TypeDefinitionIndex(6576)),
// TypeDefinitionIndex(TypeDefinitionIndex(6577))] Self: TypeDefinitionIndex(TypeDefinitionIndex(6618)) CS Name: ::UnityEngine.UIElements::TransformData
struct CORDL_TYPE TransformData {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransformData>"
  constexpr operator ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransformData>*();

  /// @brief Convert to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransformData>"
  constexpr ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransformData>* i___UnityEngine__UIElements__IStyleDataGroup_1___UnityEngine__UIElements__TransformData_();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::TransformData>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::TransformData>*();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::TransformData>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::TransformData>* i___System__IEquatable_1___UnityEngine__UIElements__TransformData_();

  /// @brief Method Copy, addr 0x2e9e7a0, size 0x1c, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::TransformData Copy();

  /// @brief Method CopyFrom, addr 0x2e9e7bc, size 0x14, virtual true, abstract: false, final true
  inline void CopyFrom(ByRef<::UnityEngine::UIElements::TransformData> other);

  /// @brief Method op_Equality, addr 0x2e9e7d0, size 0x128, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::TransformData lhs, ::UnityEngine::UIElements::TransformData rhs);

  /// @brief Method Equals, addr 0x2e9e8f8, size 0x44, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::TransformData other);

  /// @brief Method Equals, addr 0x2e9e93c, size 0xa0, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x2e9e9dc, size 0x64, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "rotate", ty: "::UnityEngine::UIElements::Rotate", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "::UnityEngine::UIElements::Scale", modifiers:
  // "", def_value: None }, CppParam { name: "transformOrigin", ty: "::UnityEngine::UIElements::TransformOrigin", modifiers: "", def_value: None }, CppParam { name: "translate", ty:
  // "::UnityEngine::UIElements::Translate", modifiers: "", def_value: None }]
  constexpr TransformData(::UnityEngine::UIElements::Rotate rotate, ::UnityEngine::UIElements::Scale scale, ::UnityEngine::UIElements::TransformOrigin transformOrigin,
                          ::UnityEngine::UIElements::Translate translate) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformData();

  /// @brief Field rotate, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::UIElements::Rotate rotate;

  /// @brief Field scale, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::UIElements::Scale scale;

  /// @brief Field transformOrigin, offset: 0x28, size: 0x14, def value: None
  ::UnityEngine::UIElements::TransformOrigin transformOrigin;

  /// @brief Field translate, offset: 0x3c, size: 0x18, def value: None
  ::UnityEngine::UIElements::Translate translate;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x54 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransformData, 0x54>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TransformData, rotate) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TransformData, scale) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TransformData, transformOrigin) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TransformData, translate) == 0x3c, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransformData, "UnityEngine.UIElements", "TransformData");

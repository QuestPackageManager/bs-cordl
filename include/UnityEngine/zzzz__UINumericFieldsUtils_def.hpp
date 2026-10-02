#pragma once
// IWYU pragma private; include "UnityEngine/UINumericFieldsUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UINumericFieldsUtils)
namespace UnityEngine {
class ExpressionEvaluator_Expression;
}
// Forward declare root types
namespace UnityEngine {
class UINumericFieldsUtils;
}
// Write type traits
MARK_REF_T(::UnityEngine::UINumericFieldsUtils*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UINumericFieldsUtils*, "UnityEngine", "UINumericFieldsUtils");
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule", "UnityEditor.UIBuilderModule" })]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.UINumericFieldsUtils
class CORDL_TYPE UINumericFieldsUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_AllowedCharactersForFloat, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_AllowedCharactersForFloat, put = setStaticF_k_AllowedCharactersForFloat)) ::StringW k_AllowedCharactersForFloat;

  /// @brief Field k_AllowedCharactersForFloat_NoExpressions, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_AllowedCharactersForFloat_NoExpressions, put = setStaticF_k_AllowedCharactersForFloat_NoExpressions)) ::StringW k_AllowedCharactersForFloat_NoExpressions;

  /// @brief Field k_AllowedCharactersForInt, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_AllowedCharactersForInt, put = setStaticF_k_AllowedCharactersForInt)) ::StringW k_AllowedCharactersForInt;

  /// @brief Field k_AllowedCharactersForInt_NoExpressions, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_AllowedCharactersForInt_NoExpressions, put = setStaticF_k_AllowedCharactersForInt_NoExpressions)) ::StringW k_AllowedCharactersForInt_NoExpressions;

  /// @brief Field k_AllowedCharactersForUInt_NoExpressions, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_AllowedCharactersForUInt_NoExpressions, put = setStaticF_k_AllowedCharactersForUInt_NoExpressions)) ::StringW k_AllowedCharactersForUInt_NoExpressions;

  /// @brief Field k_DoubleFieldFormatString, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_DoubleFieldFormatString, put = setStaticF_k_DoubleFieldFormatString)) ::StringW k_DoubleFieldFormatString;

  /// @brief Field k_FloatFieldFormatString, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_FloatFieldFormatString, put = setStaticF_k_FloatFieldFormatString)) ::StringW k_FloatFieldFormatString;

  /// @brief Field k_IntFieldFormatString, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_IntFieldFormatString, put = setStaticF_k_IntFieldFormatString)) ::StringW k_IntFieldFormatString;

  /// @brief Method TryConvertStringToDouble, addr 0x6f4dfa8, size 0x12c, virtual false, abstract: false, final false
  static inline bool TryConvertStringToDouble(::StringW str, ::StringW initialValueAsString, ::by_ref<double_t> value, ::by_ref<::UnityEngine::ExpressionEvaluator_Expression*> expression);

  /// @brief Method TryConvertStringToDouble, addr 0x6f4de10, size 0x198, virtual false, abstract: false, final false
  static inline bool TryConvertStringToDouble(::StringW str, ::by_ref<double_t> value, ::by_ref<::UnityEngine::ExpressionEvaluator_Expression*> expr);

  /// @brief Method TryConvertStringToFloat, addr 0x6f4e0d4, size 0xfc, virtual false, abstract: false, final false
  static inline bool TryConvertStringToFloat(::StringW str, ::StringW initialValueAsString, ::by_ref<float_t> value, ::by_ref<::UnityEngine::ExpressionEvaluator_Expression*> expression);

  /// @brief Method TryConvertStringToInt, addr 0x6f4e540, size 0xac, virtual false, abstract: false, final false
  static inline bool TryConvertStringToInt(::StringW str, ::StringW initialValueAsString, ::by_ref<int32_t> value, ::by_ref<::UnityEngine::ExpressionEvaluator_Expression*> expression);

  /// @brief Method TryConvertStringToLong, addr 0x6f4e25c, size 0x12c, virtual false, abstract: false, final false
  static inline bool TryConvertStringToLong(::StringW str, ::StringW initialValueAsString, ::by_ref<int64_t> value, ::by_ref<::UnityEngine::ExpressionEvaluator_Expression*> expression);

  /// @brief Method TryConvertStringToLong, addr 0x6f4e1d0, size 0x8c, virtual false, abstract: false, final false
  static inline bool TryConvertStringToLong(::StringW str, ::by_ref<int64_t> value, ::by_ref<::UnityEngine::ExpressionEvaluator_Expression*> expr);

  /// @brief Method TryConvertStringToUInt, addr 0x6f4e5ec, size 0xa8, virtual false, abstract: false, final false
  static inline bool TryConvertStringToUInt(::StringW str, ::StringW initialValueAsString, ::by_ref<uint32_t> value, ::by_ref<::UnityEngine::ExpressionEvaluator_Expression*> expression);

  /// @brief Method TryConvertStringToULong, addr 0x6f4e414, size 0x12c, virtual false, abstract: false, final false
  static inline bool TryConvertStringToULong(::StringW str, ::StringW initialValueAsString, ::by_ref<uint64_t> value, ::by_ref<::UnityEngine::ExpressionEvaluator_Expression*> expression);

  /// @brief Method TryConvertStringToULong, addr 0x6f4e388, size 0x8c, virtual false, abstract: false, final false
  static inline bool TryConvertStringToULong(::StringW str, ::by_ref<uint64_t> value, ::by_ref<::UnityEngine::ExpressionEvaluator_Expression*> expr);

  static inline ::StringW getStaticF_k_AllowedCharactersForFloat();

  static inline ::StringW getStaticF_k_AllowedCharactersForFloat_NoExpressions();

  static inline ::StringW getStaticF_k_AllowedCharactersForInt();

  static inline ::StringW getStaticF_k_AllowedCharactersForInt_NoExpressions();

  static inline ::StringW getStaticF_k_AllowedCharactersForUInt_NoExpressions();

  static inline ::StringW getStaticF_k_DoubleFieldFormatString();

  static inline ::StringW getStaticF_k_FloatFieldFormatString();

  static inline ::StringW getStaticF_k_IntFieldFormatString();

  static inline void setStaticF_k_AllowedCharactersForFloat(::StringW value);

  static inline void setStaticF_k_AllowedCharactersForFloat_NoExpressions(::StringW value);

  static inline void setStaticF_k_AllowedCharactersForInt(::StringW value);

  static inline void setStaticF_k_AllowedCharactersForInt_NoExpressions(::StringW value);

  static inline void setStaticF_k_AllowedCharactersForUInt_NoExpressions(::StringW value);

  static inline void setStaticF_k_DoubleFieldFormatString(::StringW value);

  static inline void setStaticF_k_FloatFieldFormatString(::StringW value);

  static inline void setStaticF_k_IntFieldFormatString(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UINumericFieldsUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UINumericFieldsUtils", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UINumericFieldsUtils(UINumericFieldsUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UINumericFieldsUtils", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UINumericFieldsUtils(UINumericFieldsUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10003 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UINumericFieldsUtils) == 0x10, "Size mismatch!");

} // namespace UnityEngine

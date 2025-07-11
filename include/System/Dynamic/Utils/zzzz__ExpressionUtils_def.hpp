#pragma once
// IWYU pragma private; include "System/Dynamic/Utils/ExpressionUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExpressionUtils)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class LambdaExpression;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Dynamic::Utils {
class ExpressionUtils;
}
// Write type traits
MARK_REF_PTR_T(::System::Dynamic::Utils::ExpressionUtils);
// Dependencies System.Object
namespace System::Dynamic::Utils {
// Is value type: false
// CS Name: System.Dynamic.Utils.ExpressionUtils
class CORDL_TYPE ExpressionUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetParametersForValidation, addr 0x4102bf4, size 0x94, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> GetParametersForValidation(::System::Reflection::MethodBase* method,
                                                                                                                                          ::System::Linq::Expressions::ExpressionType nodeKind);

  /// @brief Method RequiresCanRead, addr 0x41033d4, size 0x8, virtual false, abstract: false, final false
  static inline void RequiresCanRead(::System::Linq::Expressions::Expression* expression, ::StringW paramName);

  /// @brief Method RequiresCanRead, addr 0x4102f44, size 0x1b8, virtual false, abstract: false, final false
  static inline void RequiresCanRead(::System::Linq::Expressions::Expression* expression, ::StringW paramName, int32_t idx);

  /// @brief Method ReturnObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T ReturnObject(::System::Object* collectionOrT);

  /// @brief Method ReturnReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* ReturnReadOnly(::ByRef<::System::Collections::Generic::IReadOnlyList_1<T>*> collection);

  /// @brief Method SameElements, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool SameElements(::ByRef<::System::Collections::Generic::IEnumerable_1<T>*> replacement, ::System::Collections::Generic::IReadOnlyList_1<T>* current);

  /// @brief Method SameElementsInCollection, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool SameElementsInCollection(::System::Collections::Generic::ICollection_1<T>* replacement, ::System::Collections::Generic::IReadOnlyList_1<T>* current);

  /// @brief Method TryQuote, addr 0x41032b0, size 0x124, virtual false, abstract: false, final false
  static inline bool TryQuote(::System::Type* parameterType, ::ByRef<::System::Linq::Expressions::Expression*> argument);

  /// @brief Method ValidateArgumentCount, addr 0x4103584, size 0xd4, virtual false, abstract: false, final false
  static inline void ValidateArgumentCount(::System::Linq::Expressions::LambdaExpression* lambda);

  /// @brief Method ValidateArgumentCount, addr 0x4102c88, size 0xac, virtual false, abstract: false, final false
  static inline void ValidateArgumentCount(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind, int32_t count,
                                           ::ArrayW<::System::Reflection::ParameterInfo*, ::Array<::System::Reflection::ParameterInfo*>*> pis);

  /// @brief Method ValidateArgumentTypes, addr 0x410293c, size 0x2b8, virtual false, abstract: false, final false
  static inline void ValidateArgumentTypes(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind,
                                           ::ByRef<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*> arguments, ::StringW methodParamName);

  /// @brief Method ValidateOneArgument, addr 0x4102d34, size 0x210, virtual false, abstract: false, final false
  static inline ::System::Linq::Expressions::Expression* ValidateOneArgument(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind,
                                                                             ::System::Linq::Expressions::Expression* arguments, ::System::Reflection::ParameterInfo* pi, ::StringW methodParamName,
                                                                             ::StringW argumentParamName, int32_t index);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExpressionUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExpressionUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExpressionUtils(ExpressionUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExpressionUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExpressionUtils(ExpressionUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14186 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Dynamic::Utils::ExpressionUtils, 0x10>, "Size mismatch!");

} // namespace System::Dynamic::Utils
NEED_NO_BOX(::System::Dynamic::Utils::ExpressionUtils);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::Utils::ExpressionUtils*, "System.Dynamic.Utils", "ExpressionUtils");

#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/IGenericNameProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IGenericNameProvider)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class IGenericNameProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::IGenericNameProvider);
// Dependencies
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.IGenericNameProvider
class CORDL_TYPE IGenericNameProvider {
public:
  // Declarations
  __declspec(property(get = get_ParametersFromBuiltInNamespaces)) bool ParametersFromBuiltInNamespaces;

  /// @brief Method GetGenericTypeName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetGenericTypeName();

  /// @brief Method GetNamespaces, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetNamespaces();

  /// @brief Method GetNestedParameterCounts, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IList_1<int32_t>* GetNestedParameterCounts();

  /// @brief Method GetParameterCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetParameterCount();

  /// @brief Method GetParameterName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetParameterName(int32_t paramIndex);

  /// @brief Method get_ParametersFromBuiltInNamespaces, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_ParametersFromBuiltInNamespaces();

  // Ctor Parameters [CppParam { name: "", ty: "IGenericNameProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGenericNameProvider(IGenericNameProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16970 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::IGenericNameProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::IGenericNameProvider*, "System.Runtime.Serialization", "IGenericNameProvider");

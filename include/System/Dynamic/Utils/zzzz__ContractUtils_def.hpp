#pragma once
// IWYU pragma private; include "System\Dynamic\Utils\ContractUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ContractUtils)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Dynamic::Utils {
class ContractUtils;
}
// Write type traits
MARK_REF_T(::System::Dynamic::Utils::ContractUtils*);
DEFINE_IL2CPP_CLASS(::System::Dynamic::Utils::ContractUtils*, "System.Dynamic.Utils", "ContractUtils");
// Dependencies System.Object
namespace System::Dynamic::Utils {
// Is value type: false
// CS Name: System.Dynamic.Utils.ContractUtils
class CORDL_TYPE ContractUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetParamName, addr 0x5fc8fe4, size 0xb0, virtual false, abstract: false, final false
  static inline ::StringW GetParamName(::StringW paramName, int32_t index);

  /// @brief Method Requires, addr 0x5fc898c, size 0x34, virtual false, abstract: false, final false
  static inline void Requires(bool precondition, ::StringW paramName);

  /// @brief Method RequiresArrayRange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void RequiresArrayRange(::System::Collections::Generic::IList_1<T>* array, int32_t offset, int32_t count, ::StringW offsetName, ::StringW countName);

  /// @brief Method RequiresNotNull, addr 0x5fc6830, size 0x4c, virtual false, abstract: false, final false
  static inline void RequiresNotNull(::System::Object* value, ::StringW paramName);

  /// @brief Method RequiresNotNull, addr 0x5fc8f8c, size 0x58, virtual false, abstract: false, final false
  static inline void RequiresNotNull(::System::Object* value, ::StringW paramName, int32_t index);

  /// @brief Method RequiresNotNullItems, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void RequiresNotNullItems(::System::Collections::Generic::IList_1<T>* array, ::StringW arrayName);

  /// @brief Method get_Unreachable, addr 0x5fc8f0c, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Exception* get_Unreachable();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContractUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContractUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContractUtils(ContractUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContractUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContractUtils(ContractUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16677 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Dynamic::Utils::ContractUtils) == 0x10, "Size mismatch!");

} // namespace System::Dynamic::Utils

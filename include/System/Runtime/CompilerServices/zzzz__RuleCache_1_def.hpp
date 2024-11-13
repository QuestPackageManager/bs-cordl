#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/RuleCache_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuleCache_1)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
template <typename T> class RuleCache_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Runtime::CompilerServices::RuleCache_1);
// Type: System.Runtime.CompilerServices::RuleCache`1
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::System.Runtime.CompilerServices::RuleCache`1<T>*
class CORDL_TYPE RuleCache_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _cacheLock, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__cacheLock, put = __cordl_internal_set__cacheLock)) ::System::Object* _cacheLock;

  /// @brief Field _rules, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__rules, put = __cordl_internal_set__rules)) ::ArrayW<T, ::Array<T>*> _rules;

  /// @brief Method AddOrInsert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::ArrayW<T, ::Array<T>*> AddOrInsert(::ArrayW<T, ::Array<T>*> rules, T item);

  /// @brief Method AddRule, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddRule(T newRule);

  /// @brief Method GetRules, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<T, ::Array<T>*> GetRules();

  /// @brief Method MoveRule, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void MoveRule(T rule, int32_t i);

  static inline ::System::Runtime::CompilerServices::RuleCache_1<T>* New_ctor();

  constexpr ::System::Object*& __cordl_internal_get__cacheLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__cacheLock() const;

  constexpr ::ArrayW<T, ::Array<T>*> const& __cordl_internal_get__rules() const;

  constexpr ::ArrayW<T, ::Array<T>*>& __cordl_internal_get__rules();

  constexpr void __cordl_internal_set__cacheLock(::System::Object* value);

  constexpr void __cordl_internal_set__rules(::ArrayW<T, ::Array<T>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuleCache_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuleCache_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuleCache_1(RuleCache_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuleCache_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuleCache_1(RuleCache_1 const&) = delete;

  /// @brief Field _rules, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ____rules;

  /// @brief Field _cacheLock, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____cacheLock;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14102 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::CompilerServices
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Runtime::CompilerServices::RuleCache_1, "System.Runtime.CompilerServices", "RuleCache`1");

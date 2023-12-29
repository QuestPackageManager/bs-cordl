#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashHelpers)
namespace System::Runtime::CompilerServices {
template <typename TKey, typename TValue> class ConditionalWeakTable_2;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class HashHelpers;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::HashHelpers);
// Type: System.Collections::HashHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3742))
// CS Name: ::System.Collections::HashHelpers*
class CORDL_TYPE HashHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Field primes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_primes, put = setStaticF_primes))::ArrayW<int32_t, ::Array<int32_t>*> primes;

  /// @brief Field s_serializationInfoTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_serializationInfoTable, put = setStaticF_s_serializationInfoTable))::System::Runtime::CompilerServices::ConditionalWeakTable_2<
      ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* s_serializationInfoTable;

  static inline void setStaticF_primes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_primes();

  static inline void setStaticF_s_serializationInfoTable(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* value);

  static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* getStaticF_s_serializationInfoTable();

  /// @brief Method IsPrime addr 0x2421058 size 0xb0 virtual false final false
  static inline bool IsPrime(int32_t candidate);

  /// @brief Method GetPrime addr 0x2421108 size 0x190 virtual false final false
  static inline int32_t GetPrime(int32_t min);

  /// @brief Method ExpandPrime addr 0x2421298 size 0x84 virtual false final false
  static inline int32_t ExpandPrime(int32_t oldSize);

  /// @brief Method get_SerializationInfoTable addr 0x242131c size 0xe0 virtual false final false
  static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* get_SerializationInfoTable();

  // Ctor Parameters [CppParam { name: "", ty: "HashHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashHelpers(HashHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashHelpers(HashHelpers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashHelpers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::HashHelpers, 0x10>, "Size mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::HashHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::HashHelpers*, "System.Collections", "HashHelpers");

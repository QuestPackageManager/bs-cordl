#pragma once
// IWYU pragma private; include "System/Collections/HashHelpers.hpp"
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
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections {
// Is value type: false
// CS Name: ::System.Collections::HashHelpers*
class CORDL_TYPE HashHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Field primes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_primes, put = setStaticF_primes)) ::ArrayW<int32_t, ::Array<int32_t>*> primes;

  /// @brief Field s_serializationInfoTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_serializationInfoTable, put = setStaticF_s_serializationInfoTable)) ::System::Runtime::CompilerServices::ConditionalWeakTable_2<
      ::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* s_serializationInfoTable;

  /// @brief Method ExpandPrime, addr 0x3d43444, size 0x84, virtual false, abstract: false, final false
  static inline int32_t ExpandPrime(int32_t oldSize);

  /// @brief Method GetPrime, addr 0x3d432bc, size 0x188, virtual false, abstract: false, final false
  static inline int32_t GetPrime(int32_t min);

  /// @brief Method IsPrime, addr 0x3d43204, size 0xb8, virtual false, abstract: false, final false
  static inline bool IsPrime(int32_t candidate);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_primes();

  static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* getStaticF_s_serializationInfoTable();

  /// @brief Method get_SerializationInfoTable, addr 0x3d434c8, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* get_SerializationInfoTable();

  static inline void setStaticF_primes(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_s_serializationInfoTable(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HashHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashHelpers(HashHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashHelpers(HashHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3761 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::HashHelpers, 0x10>, "Size mismatch!");

} // namespace System::Collections
NEED_NO_BOX(::System::Collections::HashHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::HashHelpers*, "System.Collections", "HashHelpers");

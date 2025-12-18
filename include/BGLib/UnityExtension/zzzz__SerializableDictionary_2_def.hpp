#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/SerializableDictionary_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/UnityExtension/zzzz__SerializableDictionaryBase_3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerializableDictionary_2)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace BGLib::UnityExtension {
template <typename TKey, typename TValue> class SerializableDictionary_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::BGLib::UnityExtension::SerializableDictionary_2);
// Dependencies BGLib.UnityExtension.SerializableDictionaryBase`3<TKey, TValue, TValueStorage>
namespace BGLib::UnityExtension {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: BGLib.UnityExtension.SerializableDictionary`2<TKey,TValue>
class CORDL_TYPE SerializableDictionary_2 : public ::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValue> {
public:
  // Declarations
  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValue GetValue(::ArrayW<TValue, ::Array<TValue>*> storage, int32_t i);

  static inline ::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>* New_ctor();

  static inline ::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dict);

  static inline ::BGLib::UnityExtension::SerializableDictionary_2<TKey, TValue>* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                          ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetValue(::ArrayW<TValue, ::Array<TValue>*> storage, int32_t i, TValue value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dict);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializableDictionary_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializableDictionary_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializableDictionary_2(SerializableDictionary_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializableDictionary_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializableDictionary_2(SerializableDictionary_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20738 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::UnityExtension
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGLib::UnityExtension::SerializableDictionary_2, "BGLib.UnityExtension", "SerializableDictionary`2");

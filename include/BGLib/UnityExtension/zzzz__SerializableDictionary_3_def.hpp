#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/SerializableDictionary_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/UnityExtension/zzzz__SerializableDictionaryBase_3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerializableDictionary_3)
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
template <typename TKey, typename TValue, typename TValueStorage> class SerializableDictionary_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::BGLib::UnityExtension::SerializableDictionary_3);
// Dependencies BGLib.UnityExtension.SerializableDictionaryBase`3<TKey, TValue, TValueStorage>
namespace BGLib::UnityExtension {
// cpp template
template <typename TKey, typename TValue, typename TValueStorage>
// Is value type: false
// CS Name: BGLib.UnityExtension.SerializableDictionary`3<TKey,TValue,TValueStorage>
class CORDL_TYPE SerializableDictionary_3 : public ::BGLib::UnityExtension::SerializableDictionaryBase_3<TKey, TValue, TValueStorage> {
public:
  // Declarations
  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TValue GetValue(::ArrayW<TValueStorage, ::Array<TValueStorage>*> storage, int32_t i);

  static inline ::BGLib::UnityExtension::SerializableDictionary_3<TKey, TValue, TValueStorage>* New_ctor();

  static inline ::BGLib::UnityExtension::SerializableDictionary_3<TKey, TValue, TValueStorage>* New_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dict);

  static inline ::BGLib::UnityExtension::SerializableDictionary_3<TKey, TValue, TValueStorage>* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                         ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetValue(::ArrayW<TValueStorage, ::Array<TValueStorage>*> storage, int32_t i, TValue value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dict);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializableDictionary_3();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializableDictionary_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializableDictionary_3(SerializableDictionary_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializableDictionary_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializableDictionary_3(SerializableDictionary_3 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20714 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::UnityExtension
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGLib::UnityExtension::SerializableDictionary_3, "BGLib.UnityExtension", "SerializableDictionary`3");

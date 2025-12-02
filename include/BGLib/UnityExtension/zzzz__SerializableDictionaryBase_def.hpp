#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/SerializableDictionaryBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SerializableDictionaryBase)
namespace BGLib::UnityExtension {
template <typename TKey, typename TValue> class SerializableDictionaryBase_Dictionary_2;
}
namespace BGLib::UnityExtension {
class SerializableDictionaryBase_Storage;
}
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
class SerializableDictionaryBase;
}
namespace BGLib::UnityExtension {
template <typename TKey, typename TValue> class SerializableDictionaryBase_Dictionary_2;
}
namespace BGLib::UnityExtension {
class SerializableDictionaryBase_Storage;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::SerializableDictionaryBase);
MARK_GEN_REF_PTR_T(::BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2);
MARK_REF_PTR_T(::BGLib::UnityExtension::SerializableDictionaryBase_Storage);
// Dependencies System.Object
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: BGLib.UnityExtension.SerializableDictionaryBase/Storage
class CORDL_TYPE SerializableDictionaryBase_Storage : public ::System::Object {
public:
  // Declarations
  static inline ::BGLib::UnityExtension::SerializableDictionaryBase_Storage* New_ctor();

  /// @brief Method .ctor, addr 0x31fe5d8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializableDictionaryBase_Storage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializableDictionaryBase_Storage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializableDictionaryBase_Storage(SerializableDictionaryBase_Storage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializableDictionaryBase_Storage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializableDictionaryBase_Storage(SerializableDictionaryBase_Storage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20707 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::SerializableDictionaryBase_Storage, 0x10>, "Size mismatch!");

} // namespace BGLib::UnityExtension
// Dependencies System.Collections.Generic.Dictionary`2<TKey, TValue>
namespace BGLib::UnityExtension {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: BGLib.UnityExtension.SerializableDictionaryBase/Dictionary`2<TKey,TValue>
class CORDL_TYPE SerializableDictionaryBase_Dictionary_2 : public ::System::Collections::Generic::Dictionary_2<TKey, TValue> {
public:
  // Declarations
  static inline ::BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2<TKey, TValue>* New_ctor();

  static inline ::BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2<TKey, TValue>* New_ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dict);

  static inline ::BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2<TKey, TValue>* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                         ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IDictionary_2<TKey, TValue>* dict);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializableDictionaryBase_Dictionary_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializableDictionaryBase_Dictionary_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializableDictionaryBase_Dictionary_2(SerializableDictionaryBase_Dictionary_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializableDictionaryBase_Dictionary_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializableDictionaryBase_Dictionary_2(SerializableDictionaryBase_Dictionary_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20708 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::UnityExtension
// Dependencies System.Object
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: BGLib.UnityExtension.SerializableDictionaryBase
class CORDL_TYPE SerializableDictionaryBase : public ::System::Object {
public:
  // Declarations
  template <typename TKey, typename TValue> using Dictionary_2 = ::BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2<TKey, TValue>;

  using Storage = ::BGLib::UnityExtension::SerializableDictionaryBase_Storage;

  static inline ::BGLib::UnityExtension::SerializableDictionaryBase* New_ctor();

  /// @brief Method .ctor, addr 0x31fe5d4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializableDictionaryBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializableDictionaryBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializableDictionaryBase(SerializableDictionaryBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializableDictionaryBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializableDictionaryBase(SerializableDictionaryBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20709 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::SerializableDictionaryBase, 0x10>, "Size mismatch!");

} // namespace BGLib::UnityExtension
NEED_NO_BOX(::BGLib::UnityExtension::SerializableDictionaryBase);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::SerializableDictionaryBase*, "BGLib.UnityExtension", "SerializableDictionaryBase");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGLib::UnityExtension::SerializableDictionaryBase_Dictionary_2, "BGLib.UnityExtension", "SerializableDictionaryBase/Dictionary`2");
NEED_NO_BOX(::BGLib::UnityExtension::SerializableDictionaryBase_Storage);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::SerializableDictionaryBase_Storage*, "BGLib.UnityExtension", "SerializableDictionaryBase/Storage");

#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/SerializationEventsCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SerializationEventsCache)
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2;
}
namespace System::Runtime::Serialization {
class SerializationEventsCache___c;
}
namespace System::Runtime::Serialization {
class SerializationEvents;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SerializationEventsCache;
}
namespace System::Runtime::Serialization {
class SerializationEventsCache___c;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SerializationEventsCache);
MARK_REF_PTR_T(::System::Runtime::Serialization::SerializationEventsCache___c);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.SerializationEventsCache/<>c
class CORDL_TYPE SerializationEventsCache___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Runtime::Serialization::SerializationEventsCache___c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0)) ::System::Func_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>* __9__1_0;

  static inline ::System::Runtime::Serialization::SerializationEventsCache___c* New_ctor();

  /// @brief Method <GetSerializationEventsForType>b__1_0, addr 0x3cf48a8, size 0x58, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::SerializationEvents* _GetSerializationEventsForType_b__1_0(::System::Type* type);

  /// @brief Method .ctor, addr 0x3cf48a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Runtime::Serialization::SerializationEventsCache___c* getStaticF___9();

  static inline ::System::Func_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>* getStaticF___9__1_0();

  static inline void setStaticF___9(::System::Runtime::Serialization::SerializationEventsCache___c* value);

  static inline void setStaticF___9__1_0(::System::Func_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationEventsCache___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializationEventsCache___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationEventsCache___c(SerializationEventsCache___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationEventsCache___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationEventsCache___c(SerializationEventsCache___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3208 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SerializationEventsCache___c, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.SerializationEventsCache
class CORDL_TYPE SerializationEventsCache : public ::System::Object {
public:
  // Declarations
  using __c = ::System::Runtime::Serialization::SerializationEventsCache___c;

  /// @brief Field s_cache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_cache,
                      put = setStaticF_s_cache)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>* s_cache;

  /// @brief Method GetSerializationEventsForType, addr 0x3cf4688, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Runtime::Serialization::SerializationEvents* GetSerializationEventsForType(::System::Type* t);

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>* getStaticF_s_cache();

  static inline void setStaticF_s_cache(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationEventsCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializationEventsCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationEventsCache(SerializationEventsCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationEventsCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationEventsCache(SerializationEventsCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3209 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SerializationEventsCache, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SerializationEventsCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationEventsCache*, "System.Runtime.Serialization", "SerializationEventsCache");
NEED_NO_BOX(::System::Runtime::Serialization::SerializationEventsCache___c);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationEventsCache___c*, "System.Runtime.Serialization", "SerializationEventsCache/<>c");

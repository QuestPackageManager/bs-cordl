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
class SerializationEvents;
}
namespace System::Runtime::Serialization {
class __SerializationEventsCache____c;
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
class __SerializationEventsCache____c;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SerializationEventsCache);
MARK_REF_PTR_T(::System::Runtime::Serialization::__SerializationEventsCache____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: ::SerializationEventsCache::<>c*
class CORDL_TYPE __SerializationEventsCache____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::System::Runtime::Serialization::__SerializationEventsCache____c* __9;

  /// @brief Field <>9__1_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__1_0, put = setStaticF___9__1_0))::System::Func_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>* __9__1_0;

  static inline ::System::Runtime::Serialization::__SerializationEventsCache____c* New_ctor();

  /// @brief Method <GetSerializationEventsForType>b__1_0, addr 0x283663c, size 0x60, virtual false, abstract: false, final false
  inline ::System::Runtime::Serialization::SerializationEvents* _GetSerializationEventsForType_b__1_0(::System::Type* type);

  /// @brief Method .ctor, addr 0x2836634, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Runtime::Serialization::__SerializationEventsCache____c* getStaticF___9();

  static inline ::System::Func_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>* getStaticF___9__1_0();

  static inline void setStaticF___9(::System::Runtime::Serialization::__SerializationEventsCache____c* value);

  static inline void setStaticF___9__1_0(::System::Func_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SerializationEventsCache____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SerializationEventsCache____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SerializationEventsCache____c(__SerializationEventsCache____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SerializationEventsCache____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SerializationEventsCache____c(__SerializationEventsCache____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::__SerializationEventsCache____c, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
// Type: System.Runtime.Serialization::SerializationEventsCache
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: ::System.Runtime.Serialization::SerializationEventsCache*
class CORDL_TYPE SerializationEventsCache : public ::System::Object {
public:
  // Declarations
  using __c = ::System::Runtime::Serialization::__SerializationEventsCache____c;

  /// @brief Field s_cache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cache,
                             put = setStaticF_s_cache))::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Runtime::Serialization::SerializationEvents*>* s_cache;

  /// @brief Method GetSerializationEventsForType, addr 0x2836410, size 0x134, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SerializationEventsCache, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SerializationEventsCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationEventsCache*, "System.Runtime.Serialization", "SerializationEventsCache");
NEED_NO_BOX(::System::Runtime::Serialization::__SerializationEventsCache____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::__SerializationEventsCache____c*, "System.Runtime.Serialization", "SerializationEventsCache/<>c");

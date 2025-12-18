#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/ObjectToIdCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectToIdCache)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class ObjectToIdCache;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::ObjectToIdCache);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.ObjectToIdCache
class CORDL_TYPE ObjectToIdCache : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_currentCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_currentCount, put = __cordl_internal_set_m_currentCount)) int32_t m_currentCount;

  /// @brief Field m_ids, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ids, put = __cordl_internal_set_m_ids)) ::ArrayW<int32_t, ::Array<int32_t>*> m_ids;

  /// @brief Field m_isWrapped, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_isWrapped, put = __cordl_internal_set_m_isWrapped)) ::ArrayW<bool, ::Array<bool>*> m_isWrapped;

  /// @brief Field m_objs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_objs, put = __cordl_internal_set_m_objs)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> m_objs;

  /// @brief Field primes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_primes, put = setStaticF_primes)) ::ArrayW<int32_t, ::Array<int32_t>*> primes;

  /// @brief Method ComputeStartPosition, addr 0x5fa5c78, size 0x34, virtual false, abstract: false, final false
  inline int32_t ComputeStartPosition(::System::Object* o);

  /// @brief Method FindElement, addr 0x5fa562c, size 0xd0, virtual false, abstract: false, final false
  inline int32_t FindElement(::System::Object* obj, ::ByRef<bool> isEmpty, ::ByRef<bool> isWrapped);

  /// @brief Method GetId, addr 0x5fa54ec, size 0x140, virtual false, abstract: false, final false
  inline int32_t GetId(::System::Object* obj, ::ByRef<bool> newId);

  /// @brief Method GetPrime, addr 0x5fa53e8, size 0x104, virtual false, abstract: false, final false
  static inline int32_t GetPrime(int32_t min);

  /// @brief Method IsPrime, addr 0x5fa5cac, size 0xa8, virtual false, abstract: false, final false
  static inline bool IsPrime(int32_t candidate);

  static inline ::System::Runtime::Serialization::ObjectToIdCache* New_ctor();

  /// @brief Method ReassignId, addr 0x5fa5904, size 0x160, virtual false, abstract: false, final false
  inline int32_t ReassignId(int32_t oldObjId, ::System::Object* oldObj, ::System::Object* newObj);

  /// @brief Method Rehash, addr 0x5fa56fc, size 0x208, virtual false, abstract: false, final false
  inline void Rehash();

  /// @brief Method RemoveAt, addr 0x5fa5a64, size 0x214, virtual false, abstract: false, final false
  inline void RemoveAt(int32_t position);

  constexpr int32_t const& __cordl_internal_get_m_currentCount() const;

  constexpr int32_t& __cordl_internal_get_m_currentCount();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_ids() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_ids();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __cordl_internal_get_m_isWrapped() const;

  constexpr ::ArrayW<bool, ::Array<bool>*>& __cordl_internal_get_m_isWrapped();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_m_objs() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_m_objs();

  constexpr void __cordl_internal_set_m_currentCount(int32_t value);

  constexpr void __cordl_internal_set_m_ids(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_isWrapped(::ArrayW<bool, ::Array<bool>*> value);

  constexpr void __cordl_internal_set_m_objs(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method .ctor, addr 0x5fa52f4, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_primes();

  static inline void setStaticF_primes(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjectToIdCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObjectToIdCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjectToIdCache(ObjectToIdCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjectToIdCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjectToIdCache(ObjectToIdCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17027 };

  /// @brief Field m_currentCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___m_currentCount;

  /// @brief Field m_ids, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_ids;

  /// @brief Field m_objs, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___m_objs;

  /// @brief Field m_isWrapped, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___m_isWrapped;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::ObjectToIdCache, ___m_currentCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ObjectToIdCache, ___m_ids) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ObjectToIdCache, ___m_objs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::ObjectToIdCache, ___m_isWrapped) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::ObjectToIdCache, 0x30>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::ObjectToIdCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::ObjectToIdCache*, "System.Runtime.Serialization", "ObjectToIdCache");

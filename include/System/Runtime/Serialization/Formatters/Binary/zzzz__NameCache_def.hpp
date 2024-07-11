#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/NameCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NameCache)
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class NameCache;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::NameCache);
// Type: System.Runtime.Serialization.Formatters.Binary::NameCache
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::NameCache*
class CORDL_TYPE NameCache : public ::System::Object {
public:
  // Declarations
  /// @brief Field ht, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ht, put = setStaticF_ht))::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Object*>* ht;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Method GetCachedValue, addr 0x287cc9c, size 0xa8, virtual false, abstract: false, final false
  inline ::System::Object* GetCachedValue(::StringW name);

  static inline ::System::Runtime::Serialization::Formatters::Binary::NameCache* New_ctor();

  /// @brief Method SetCachedValue, addr 0x287d144, size 0x90, virtual false, abstract: false, final false
  inline void SetCachedValue(::System::Object* value);

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr void __cordl_internal_set_name(::StringW value);

  /// @brief Method .ctor, addr 0x2879310, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Object*>* getStaticF_ht();

  static inline void setStaticF_ht(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NameCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameCache(NameCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameCache(NameCache const&) = delete;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::NameCache, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::NameCache, ___name) == 0x10, "Offset mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::NameCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::NameCache*, "System.Runtime.Serialization.Formatters.Binary", "NameCache");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NameCache)
namespace System {
class Object;
}
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3294))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::NameCache*
class CORDL_TYPE NameCache : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::StringW name;

  /// @brief Field ht, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ht, put = setStaticF_ht))::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Object*>* ht;

  constexpr ::StringW& __get_name();

  constexpr ::StringW const& __get_name() const;

  constexpr void __set_name(::StringW value);

  static inline void setStaticF_ht(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Object*>* value);

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::System::Object*>* getStaticF_ht();

  /// @brief Method GetCachedValue addr 0x2376594 size 0xa8 virtual false final false
  inline ::System::Object* GetCachedValue(::StringW name);

  /// @brief Method SetCachedValue addr 0x2376a3c size 0x90 virtual false final false
  inline void SetCachedValue(::System::Object* value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::NameCache* New_ctor();

  /// @brief Method .ctor addr 0x2372ad0 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "NameCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameCache(NameCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameCache(NameCache const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameCache();

public:
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

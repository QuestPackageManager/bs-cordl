#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Specialized/zzzz__NameObjectCollectionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NameValueCollection)
namespace System {
class DBNull;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace System::Collections::Specialized {
class NameValueCollection;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::Specialized::NameValueCollection);
// Type: System.Collections.Specialized::NameValueCollection
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9522))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9513))
// CS Name: ::System.Collections.Specialized::NameValueCollection*
class CORDL_TYPE NameValueCollection : public ::System::Collections::Specialized::NameObjectCollectionBase {
public:
  // Declarations
  /// @brief Field _all, offset 0x50, size 0x8
  __declspec(property(get = __get__all, put = __set__all))::ArrayW<::StringW, ::Array<::StringW>*> _all;

  /// @brief Field _allKeys, offset 0x58, size 0x8
  __declspec(property(get = __get__allKeys, put = __set__allKeys))::ArrayW<::StringW, ::Array<::StringW>*> _allKeys;

  __declspec(property(get = get_Item, put = set_Item))::StringW Item[];

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__all();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__all() const;

  constexpr void __set__all(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__allKeys();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__allKeys() const;

  constexpr void __set__allKeys(::ArrayW<::StringW, ::Array<::StringW>*> value);

  static inline ::System::Collections::Specialized::NameValueCollection* New_ctor();

  /// @brief Method .ctor addr 0x293caec size 0x54 virtual false final false
  inline void _ctor();

  static inline ::System::Collections::Specialized::NameValueCollection* New_ctor(int32_t capacity);

  /// @brief Method .ctor addr 0x293cba0 size 0x64 virtual false final false
  inline void _ctor(int32_t capacity);

  static inline ::System::Collections::Specialized::NameValueCollection* New_ctor(int32_t capacity, ::System::Collections::IEqualityComparer* equalityComparer);

  /// @brief Method .ctor addr 0x293ccb4 size 0x74 virtual false final false
  inline void _ctor(int32_t capacity, ::System::Collections::IEqualityComparer* equalityComparer);

  static inline ::System::Collections::Specialized::NameValueCollection* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                  ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x293cd54 size 0x6c virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method InvalidateCachedArrays addr 0x293cde8 size 0x8 virtual false final false
  inline void InvalidateCachedArrays();

  /// @brief Method GetAsOneString addr 0x293cdf0 size 0x1a0 virtual false final false
  static inline ::StringW GetAsOneString(::System::Collections::ArrayList* list);

  /// @brief Method GetAsStringArray addr 0x293cf90 size 0xa0 virtual false final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetAsStringArray(::System::Collections::ArrayList* list);

  /// @brief Method Add addr 0x293d030 size 0x16c virtual true final false
  inline void Add(::StringW name, ::StringW value);

  /// @brief Method Get addr 0x293d318 size 0x8c virtual true final false
  inline ::StringW Get(::StringW name);

  /// @brief Method GetValues addr 0x293d3a4 size 0x8c virtual true final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetValues(::StringW name);

  /// @brief Method Set addr 0x293d430 size 0xec virtual true final false
  inline void Set(::StringW name, ::StringW value);

  /// @brief Method Remove addr 0x293d5cc size 0x8 virtual true final false
  inline void Remove(::StringW name);

  /// @brief Method get_Item addr 0x293d7e0 size 0x10 virtual false final false
  inline ::StringW get_Item(::StringW name);

  /// @brief Method set_Item addr 0x293d7f0 size 0x10 virtual false final false
  inline void set_Item(::StringW name, ::StringW value);

  /// @brief Method Get addr 0x293d800 size 0x84 virtual true final false
  inline ::StringW Get(int32_t index);

  /// @brief Method GetValues addr 0x293d920 size 0x84 virtual true final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetValues(int32_t index);

  /// @brief Method GetKey addr 0x293d9a4 size 0x4 virtual true final false
  inline ::StringW GetKey(int32_t index);

  static inline ::System::Collections::Specialized::NameValueCollection* New_ctor(::System::DBNull* dummy);

  /// @brief Method .ctor addr 0x293da44 size 0x58 virtual false final false
  inline void _ctor(::System::DBNull* dummy);

  // Ctor Parameters [CppParam { name: "", ty: "NameValueCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameValueCollection(NameValueCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameValueCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameValueCollection(NameValueCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameValueCollection();

public:
  /// @brief Field _all, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____all;

  /// @brief Field _allKeys, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____allKeys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::NameValueCollection, 0x60>, "Size mismatch!");

} // namespace System::Collections::Specialized
NEED_NO_BOX(::System::Collections::Specialized::NameValueCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::NameValueCollection*, "System.Collections.Specialized", "NameValueCollection");

#pragma once
// IWYU pragma private; include "System/Collections/Specialized/NameValueCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Specialized/zzzz__NameObjectCollectionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NameValueCollection)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class DBNull;
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
// CS Name: ::System.Collections.Specialized::NameValueCollection*
class CORDL_TYPE NameValueCollection : public ::System::Collections::Specialized::NameObjectCollectionBase {
public:
  // Declarations
  __declspec(property(get = get_Item, put = set_Item))::StringW Item[];

  /// @brief Field _all, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__all, put = __cordl_internal_set__all))::ArrayW<::StringW, ::Array<::StringW>*> _all;

  /// @brief Field _allKeys, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__allKeys, put = __cordl_internal_set__allKeys))::ArrayW<::StringW, ::Array<::StringW>*> _allKeys;

  /// @brief Method Add, addr 0x2f9c114, size 0x16c, virtual true, abstract: false, final false
  inline void Add(::StringW name, ::StringW value);

  /// @brief Method Get, addr 0x2f9c8e4, size 0x84, virtual true, abstract: false, final false
  inline ::StringW Get(int32_t index);

  /// @brief Method Get, addr 0x2f9c3fc, size 0x8c, virtual true, abstract: false, final false
  inline ::StringW Get(::StringW name);

  /// @brief Method GetAsOneString, addr 0x2f9bed4, size 0x1a0, virtual false, abstract: false, final false
  static inline ::StringW GetAsOneString(::System::Collections::ArrayList* list);

  /// @brief Method GetAsStringArray, addr 0x2f9c074, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<::StringW, ::Array<::StringW>*> GetAsStringArray(::System::Collections::ArrayList* list);

  /// @brief Method GetKey, addr 0x2f9ca88, size 0x4, virtual true, abstract: false, final false
  inline ::StringW GetKey(int32_t index);

  /// @brief Method GetValues, addr 0x2f9ca04, size 0x84, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetValues(int32_t index);

  /// @brief Method GetValues, addr 0x2f9c488, size 0x8c, virtual true, abstract: false, final false
  inline ::ArrayW<::StringW, ::Array<::StringW>*> GetValues(::StringW name);

  /// @brief Method InvalidateCachedArrays, addr 0x2f9becc, size 0x8, virtual false, abstract: false, final false
  inline void InvalidateCachedArrays();

  static inline ::System::Collections::Specialized::NameValueCollection* New_ctor();

  static inline ::System::Collections::Specialized::NameValueCollection* New_ctor(int32_t capacity);

  static inline ::System::Collections::Specialized::NameValueCollection* New_ctor(int32_t capacity, ::System::Collections::IEqualityComparer* equalityComparer);

  static inline ::System::Collections::Specialized::NameValueCollection* New_ctor(::System::DBNull* dummy);

  static inline ::System::Collections::Specialized::NameValueCollection* New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                  ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method Remove, addr 0x2f9c6b0, size 0x8, virtual true, abstract: false, final false
  inline void Remove(::StringW name);

  /// @brief Method Set, addr 0x2f9c514, size 0xec, virtual true, abstract: false, final false
  inline void Set(::StringW name, ::StringW value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__all() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__all();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __cordl_internal_get__allKeys() const;

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __cordl_internal_get__allKeys();

  constexpr void __cordl_internal_set__all(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr void __cordl_internal_set__allKeys(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method .ctor, addr 0x2f9bbd0, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2f9bc84, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity);

  /// @brief Method .ctor, addr 0x2f9bd98, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(int32_t capacity, ::System::Collections::IEqualityComparer* equalityComparer);

  /// @brief Method .ctor, addr 0x2f9cb28, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::DBNull* dummy);

  /// @brief Method .ctor, addr 0x2f9be38, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Item, addr 0x2f9c8c4, size 0x10, virtual false, abstract: false, final false
  inline ::StringW get_Item(::StringW name);

  /// @brief Method set_Item, addr 0x2f9c8d4, size 0x10, virtual false, abstract: false, final false
  inline void set_Item(::StringW name, ::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameValueCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NameValueCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameValueCollection(NameValueCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameValueCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameValueCollection(NameValueCollection const&) = delete;

  /// @brief Field _all, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____all;

  /// @brief Field _allKeys, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____allKeys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::NameValueCollection, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NameValueCollection, ____all) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Collections::Specialized::NameValueCollection, ____allKeys) == 0x58, "Offset mismatch!");

} // namespace System::Collections::Specialized
NEED_NO_BOX(::System::Collections::Specialized::NameValueCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::NameValueCollection*, "System.Collections.Specialized", "NameValueCollection");

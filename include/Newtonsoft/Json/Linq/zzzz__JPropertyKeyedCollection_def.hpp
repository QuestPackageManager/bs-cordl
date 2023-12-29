#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Linq/zzzz__JToken_def.hpp"
#include "System/Collections/ObjectModel/zzzz__Collection_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JPropertyKeyedCollection)
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JPropertyKeyedCollection;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Linq::JPropertyKeyedCollection);
// Type: Newtonsoft.Json.Linq::JPropertyKeyedCollection
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3802)), TypeDefinitionIndex(TypeDefinitionIndex(11930)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3802), inst:
// 1003 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(11897)) CS Name: ::Newtonsoft.Json.Linq::JPropertyKeyedCollection*
class CORDL_TYPE JPropertyKeyedCollection : public ::System::Collections::ObjectModel::Collection_1<::Newtonsoft::Json::Linq::JToken*> {
public:
  // Declarations
  /// @brief Field _dictionary, offset 0x18, size 0x8
  __declspec(property(get = __get__dictionary, put = __set__dictionary))::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>* _dictionary;

  /// @brief Field Comparer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Comparer, put = setStaticF_Comparer))::System::Collections::Generic::IEqualityComparer_1<::StringW>* Comparer;

  __declspec(property(get = get_Item))::Newtonsoft::Json::Linq::JToken* Item[];

  __declspec(property(get = get_Keys))::System::Collections::Generic::ICollection_1<::StringW>* Keys;

  __declspec(property(get = get_Values))::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>* Values;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>*& __get__dictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>*> const& __get__dictionary() const;

  constexpr void __set__dictionary(::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>* value);

  static inline void setStaticF_Comparer(::System::Collections::Generic::IEqualityComparer_1<::StringW>* value);

  static inline ::System::Collections::Generic::IEqualityComparer_1<::StringW>* getStaticF_Comparer();

  static inline ::Newtonsoft::Json::Linq::JPropertyKeyedCollection* New_ctor();

  /// @brief Method .ctor addr 0x252c62c size 0x90 virtual false final false
  inline void _ctor();

  /// @brief Method AddKey addr 0x252c6bc size 0x70 virtual false final false
  inline void AddKey(::StringW key, ::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method ChangeItemKey addr 0x252c7dc size 0x188 virtual false final false
  inline void ChangeItemKey(::Newtonsoft::Json::Linq::JToken* item, ::StringW newKey);

  /// @brief Method ClearItems addr 0x252cad0 size 0x78 virtual true final false
  inline void ClearItems();

  /// @brief Method Contains addr 0x252cb48 size 0xb0 virtual false final false
  inline bool Contains(::StringW key);

  /// @brief Method ContainsItem addr 0x252c964 size 0x8c virtual false final false
  inline bool ContainsItem(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method EnsureDictionary addr 0x252c72c size 0xb0 virtual false final false
  inline void EnsureDictionary();

  /// @brief Method GetKeyForItem addr 0x252c9f0 size 0x80 virtual false final false
  inline ::StringW GetKeyForItem(::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method InsertItem addr 0x252cbf8 size 0x78 virtual true final false
  inline void InsertItem(int32_t index, ::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method Remove addr 0x252cc70 size 0x108 virtual false final false
  inline bool Remove(::StringW key);

  /// @brief Method RemoveItem addr 0x252cd78 size 0xf4 virtual true final false
  inline void RemoveItem(int32_t index);

  /// @brief Method RemoveKey addr 0x252ca70 size 0x60 virtual false final false
  inline void RemoveKey(::StringW key);

  /// @brief Method SetItem addr 0x252ce6c size 0x208 virtual true final false
  inline void SetItem(int32_t index, ::Newtonsoft::Json::Linq::JToken* item);

  /// @brief Method get_Item addr 0x252d074 size 0xcc virtual false final false
  inline ::Newtonsoft::Json::Linq::JToken* get_Item(::StringW key);

  /// @brief Method TryGetValue addr 0x252d140 size 0x78 virtual false final false
  inline bool TryGetValue(::StringW key, ByRef<::Newtonsoft::Json::Linq::JToken*> value);

  /// @brief Method get_Keys addr 0x252d1b8 size 0x58 virtual false final false
  inline ::System::Collections::Generic::ICollection_1<::StringW>* get_Keys();

  /// @brief Method get_Values addr 0x252d210 size 0x58 virtual false final false
  inline ::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>* get_Values();

  /// @brief Method IndexOfReference addr 0x252d268 size 0xa4 virtual false final false
  inline int32_t IndexOfReference(::Newtonsoft::Json::Linq::JToken* t);

  /// @brief Method Compare addr 0x252d30c size 0x368 virtual false final false
  inline bool Compare(::Newtonsoft::Json::Linq::JPropertyKeyedCollection* other);

  // Ctor Parameters [CppParam { name: "", ty: "JPropertyKeyedCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JPropertyKeyedCollection(JPropertyKeyedCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JPropertyKeyedCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JPropertyKeyedCollection(JPropertyKeyedCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JPropertyKeyedCollection();

public:
  /// @brief Field _dictionary, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::Newtonsoft::Json::Linq::JToken*>* ____dictionary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::JPropertyKeyedCollection, 0x20>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Linq::JPropertyKeyedCollection, ____dictionary) == 0x18, "Offset mismatch!");

} // namespace Newtonsoft::Json::Linq
NEED_NO_BOX(::Newtonsoft::Json::Linq::JPropertyKeyedCollection);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JPropertyKeyedCollection*, "Newtonsoft.Json.Linq", "JPropertyKeyedCollection");

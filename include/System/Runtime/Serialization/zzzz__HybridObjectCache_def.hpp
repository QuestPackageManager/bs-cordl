#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/HybridObjectCache.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HybridObjectCache)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class HybridObjectCache;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::HybridObjectCache);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.HybridObjectCache
class CORDL_TYPE HybridObjectCache : public ::System::Object {
public:
  // Declarations
  /// @brief Field objectDictionary, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_objectDictionary,
                      put = __cordl_internal_set_objectDictionary)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* objectDictionary;

  /// @brief Field referencedObjectDictionary, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_referencedObjectDictionary,
                      put = __cordl_internal_set_referencedObjectDictionary)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* referencedObjectDictionary;

  /// @brief Method Add, addr 0x5fa2aec, size 0x1a4, virtual false, abstract: false, final false
  inline void Add(::StringW id, ::System::Object* obj);

  /// @brief Method GetObject, addr 0x5fa2d08, size 0x170, virtual false, abstract: false, final false
  inline ::System::Object* GetObject(::StringW id);

  /// @brief Method IsObjectReferenced, addr 0x5fa2e78, size 0x78, virtual false, abstract: false, final false
  inline bool IsObjectReferenced(::StringW id);

  static inline ::System::Runtime::Serialization::HybridObjectCache* New_ctor();

  /// @brief Method Remove, addr 0x5fa2c98, size 0x70, virtual false, abstract: false, final false
  inline void Remove(::StringW id);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* const& __cordl_internal_get_objectDictionary() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*& __cordl_internal_get_objectDictionary();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* const& __cordl_internal_get_referencedObjectDictionary() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>*& __cordl_internal_get_referencedObjectDictionary();

  constexpr void __cordl_internal_set_objectDictionary(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value);

  constexpr void __cordl_internal_set_referencedObjectDictionary(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x5fa2ae8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HybridObjectCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HybridObjectCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HybridObjectCache(HybridObjectCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HybridObjectCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HybridObjectCache(HybridObjectCache const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17017 };

  /// @brief Field objectDictionary, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* ___objectDictionary;

  /// @brief Field referencedObjectDictionary, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Object*>* ___referencedObjectDictionary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::HybridObjectCache, ___objectDictionary) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::HybridObjectCache, ___referencedObjectDictionary) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::HybridObjectCache, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::HybridObjectCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::HybridObjectCache*, "System.Runtime.Serialization", "HybridObjectCache");

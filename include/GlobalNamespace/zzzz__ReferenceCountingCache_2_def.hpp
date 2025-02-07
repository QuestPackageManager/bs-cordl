#pragma once
// IWYU pragma private; include "GlobalNamespace/ReferenceCountingCache_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IReferenceCountingCache_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReferenceCountingCache_2)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename TKey, typename TValue> class ReferenceCountingCache_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::ReferenceCountingCache_2);
// Dependencies IReferenceCountingCache`2<TKey, TValue>, System.Object
namespace GlobalNamespace {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: ReferenceCountingCache`2<TKey,TValue>
class CORDL_TYPE ReferenceCountingCache_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _items, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__items, put = __cordl_internal_set__items)) ::System::Collections::Generic::Dictionary_2<TKey, TValue>* _items;

  /// @brief Field _referencesCount, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__referencesCount, put = __cordl_internal_set__referencesCount)) ::System::Collections::Generic::Dictionary_2<TKey, int32_t>* _referencesCount;

  __declspec(property(get = get_values)) ::System::Collections::Generic::IEnumerable_1<TValue>* values;

  /// @brief Convert operator to "::GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>"
  constexpr operator ::GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>*() noexcept;

  /// @brief Method AddReference, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t AddReference(TKey key);

  /// @brief Method GetReferenceCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t GetReferenceCount(TKey key);

  /// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t Insert(TKey key, TValue item);

  /// @brief Method LogError, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void LogError(::StringW message);

  static inline ::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>* New_ctor();

  /// @brief Method RemoveReference, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t RemoveReference(TKey key);

  /// @brief Method TryGet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool TryGet(TKey key, ::ByRef<TValue> result);

  constexpr ::System::Collections::Generic::Dictionary_2<TKey, TValue>* const& __cordl_internal_get__items() const;

  constexpr ::System::Collections::Generic::Dictionary_2<TKey, TValue>*& __cordl_internal_get__items();

  constexpr ::System::Collections::Generic::Dictionary_2<TKey, int32_t>* const& __cordl_internal_get__referencesCount() const;

  constexpr ::System::Collections::Generic::Dictionary_2<TKey, int32_t>*& __cordl_internal_get__referencesCount();

  constexpr void __cordl_internal_set__items(::System::Collections::Generic::Dictionary_2<TKey, TValue>* value);

  constexpr void __cordl_internal_set__referencesCount(::System::Collections::Generic::Dictionary_2<TKey, int32_t>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_values, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<TValue>* get_values();

  /// @brief Convert to "::GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>"
  constexpr ::GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>* i___GlobalNamespace__IReferenceCountingCache_2_TKey_TValue_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReferenceCountingCache_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReferenceCountingCache_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReferenceCountingCache_2(ReferenceCountingCache_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReferenceCountingCache_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReferenceCountingCache_2(ReferenceCountingCache_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18597 };

  /// @brief Field _items, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TKey, TValue>* ____items;

  /// @brief Field _referencesCount, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TKey, int32_t>* ____referencesCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ReferenceCountingCache_2, "", "ReferenceCountingCache`2");

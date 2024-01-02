#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CacheDict_2)
namespace System::Dynamic::Utils {
template <typename TKey, typename TValue> class __CacheDict_2__Entry;
}
// Forward declare root types
namespace System::Dynamic::Utils {
template <typename TKey, typename TValue> class CacheDict_2;
}
namespace System::Dynamic::Utils {
template <typename TKey, typename TValue> class __CacheDict_2__Entry;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Dynamic::Utils::CacheDict_2);
MARK_GEN_REF_PTR_T(::System::Dynamic::Utils::__CacheDict_2__Entry);
// Type: ::Entry
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Dynamic::Utils {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14308))
// CS Name: ::CacheDict`2::Entry<TKey,TValue>*
class CORDL_TYPE __CacheDict_2__Entry : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__CacheDict_2__Entry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CacheDict_2__Entry(__CacheDict_2__Entry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CacheDict_2__Entry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CacheDict_2__Entry(__CacheDict_2__Entry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CacheDict_2__Entry();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Dynamic::Utils
// Type: System.Dynamic.Utils::CacheDict`2
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Dynamic::Utils {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14309))
// CS Name: ::System.Dynamic.Utils::CacheDict`2<TKey,TValue>*
class CORDL_TYPE CacheDict_2 : public ::System::Object {
public:
  // Declarations
  using Entry = ::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>;

  /// @brief Field _mask, offset 0x10, size 0x4
  __declspec(property(get = __get__mask, put = __set__mask)) int32_t _mask;

  /// @brief Field _entries, offset 0x18, size 0x8
  __declspec(property(get = __get__entries,
                      put = __set__entries))::ArrayW<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*, ::Array<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*>*> _entries;

  constexpr int32_t& __get__mask();

  constexpr int32_t const& __get__mask() const;

  constexpr void __set__mask(int32_t value);

  constexpr ::ArrayW<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*, ::Array<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*>*>& __get__entries();

  constexpr ::ArrayW<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*, ::Array<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*>*> const& __get__entries() const;

  constexpr void __set__entries(::ArrayW<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*, ::Array<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*>*> value);

  static inline ::System::Dynamic::Utils::CacheDict_2<TKey, TValue>* New_ctor(int32_t size);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t size);

  /// @brief Method AlignSize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t AlignSize(int32_t size);

  // Ctor Parameters [CppParam { name: "", ty: "CacheDict_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CacheDict_2(CacheDict_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CacheDict_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CacheDict_2(CacheDict_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CacheDict_2();

public:
  /// @brief Field _mask, offset: 0x10, size: 0x4, def value: None
  int32_t ____mask;

  /// @brief Field _entries, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*, ::Array<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*>*> ____entries;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Dynamic::Utils
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Dynamic::Utils::CacheDict_2, "System.Dynamic.Utils", "CacheDict`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Dynamic::Utils::__CacheDict_2__Entry, "System.Dynamic.Utils", "CacheDict`2/Entry");

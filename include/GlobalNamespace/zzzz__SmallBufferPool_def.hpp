#pragma once
// IWYU pragma private; include "GlobalNamespace/SmallBufferPool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SmallBufferPool)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SmallBufferPool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SmallBufferPool);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SmallBufferPool
class CORDL_TYPE SmallBufferPool : public ::System::Object {
public:
  // Declarations
  /// @brief Field _cacheLarge, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__cacheLarge, put = __cordl_internal_set__cacheLarge)) ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* _cacheLarge;

  /// @brief Field _cacheMax, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__cacheMax, put = __cordl_internal_set__cacheMax)) ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* _cacheMax;

  /// @brief Field _cacheMedium, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__cacheMedium, put = __cordl_internal_set__cacheMedium)) ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* _cacheMedium;

  /// @brief Field _cacheSmall, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__cacheSmall, put = __cordl_internal_set__cacheSmall)) ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* _cacheSmall;

  /// @brief Field instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_instance, put = setStaticF_instance)) ::GlobalNamespace::SmallBufferPool* instance;

  /// @brief Method GetBuffer, addr 0x22e7034, size 0x27c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBuffer(int32_t length);

  static inline ::GlobalNamespace::SmallBufferPool* New_ctor();

  /// @brief Method ReleaseBuffer, addr 0x22e72b0, size 0x4, virtual false, abstract: false, final false
  inline void ReleaseBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method ReleaseBuffer, addr 0x22e7470, size 0x1c, virtual false, abstract: false, final false
  inline void ReleaseBuffer(::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> buffer);

  /// @brief Method ReleaseBufferInternal, addr 0x22e72b4, size 0x1bc, virtual false, abstract: false, final false
  inline void ReleaseBufferInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* const& __cordl_internal_get__cacheLarge() const;

  constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*& __cordl_internal_get__cacheLarge();

  constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* const& __cordl_internal_get__cacheMax() const;

  constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*& __cordl_internal_get__cacheMax();

  constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* const& __cordl_internal_get__cacheMedium() const;

  constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*& __cordl_internal_get__cacheMedium();

  constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* const& __cordl_internal_get__cacheSmall() const;

  constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*& __cordl_internal_get__cacheSmall();

  constexpr void __cordl_internal_set__cacheLarge(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* value);

  constexpr void __cordl_internal_set__cacheMax(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* value);

  constexpr void __cordl_internal_set__cacheMedium(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* value);

  constexpr void __cordl_internal_set__cacheSmall(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* value);

  /// @brief Method .ctor, addr 0x22e748c, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::SmallBufferPool* getStaticF_instance();

  static inline void setStaticF_instance(::GlobalNamespace::SmallBufferPool* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmallBufferPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SmallBufferPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmallBufferPool(SmallBufferPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmallBufferPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmallBufferPool(SmallBufferPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14969 };

  /// @brief Field kCacheLargeMaxCapacity offset 0xffffffff size 0x4
  static constexpr int32_t kCacheLargeMaxCapacity{ static_cast<int32_t>(0x10) };

  /// @brief Field kCacheLargeSize offset 0xffffffff size 0x4
  static constexpr int32_t kCacheLargeSize{ static_cast<int32_t>(0x800) };

  /// @brief Field kCacheMaxMaxCapacity offset 0xffffffff size 0x4
  static constexpr int32_t kCacheMaxMaxCapacity{ static_cast<int32_t>(0x8) };

  /// @brief Field kCacheMaxSize offset 0xffffffff size 0x4
  static constexpr int32_t kCacheMaxSize{ static_cast<int32_t>(0x1000) };

  /// @brief Field kCacheMediumMaxCapacity offset 0xffffffff size 0x4
  static constexpr int32_t kCacheMediumMaxCapacity{ static_cast<int32_t>(0x20) };

  /// @brief Field kCacheMediumSize offset 0xffffffff size 0x4
  static constexpr int32_t kCacheMediumSize{ static_cast<int32_t>(0x400) };

  /// @brief Field kCacheSmallMaxCapacity offset 0xffffffff size 0x4
  static constexpr int32_t kCacheSmallMaxCapacity{ static_cast<int32_t>(0x80) };

  /// @brief Field kCacheSmallSize offset 0xffffffff size 0x4
  static constexpr int32_t kCacheSmallSize{ static_cast<int32_t>(0x200) };

  /// @brief Field _cacheSmall, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* ____cacheSmall;

  /// @brief Field _cacheMedium, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* ____cacheMedium;

  /// @brief Field _cacheLarge, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* ____cacheLarge;

  /// @brief Field _cacheMax, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* ____cacheMax;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SmallBufferPool, ____cacheSmall) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmallBufferPool, ____cacheMedium) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmallBufferPool, ____cacheLarge) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmallBufferPool, ____cacheMax) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SmallBufferPool, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SmallBufferPool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SmallBufferPool*, "", "SmallBufferPool");

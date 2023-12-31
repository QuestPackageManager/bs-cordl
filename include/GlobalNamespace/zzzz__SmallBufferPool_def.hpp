#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: ::SmallBufferPool
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12958))
// CS Name: ::SmallBufferPool*
class CORDL_TYPE SmallBufferPool : public ::System::Object {
public:
  // Declarations
  /// @brief Field _cacheSmall, offset 0x10, size 0x8
  __declspec(property(get = __get__cacheSmall, put = __set__cacheSmall))::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* _cacheSmall;

  /// @brief Field _cacheMedium, offset 0x18, size 0x8
  __declspec(property(get = __get__cacheMedium, put = __set__cacheMedium))::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* _cacheMedium;

  /// @brief Field _cacheLarge, offset 0x20, size 0x8
  __declspec(property(get = __get__cacheLarge, put = __set__cacheLarge))::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* _cacheLarge;

  /// @brief Field _cacheMax, offset 0x28, size 0x8
  __declspec(property(get = __get__cacheMax, put = __set__cacheMax))::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* _cacheMax;

  /// @brief Field instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instance, put = setStaticF_instance))::GlobalNamespace::SmallBufferPool* instance;

  constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*& __get__cacheSmall();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& __get__cacheSmall() const;

  constexpr void __set__cacheSmall(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* value);

  constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*& __get__cacheMedium();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& __get__cacheMedium() const;

  constexpr void __set__cacheMedium(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* value);

  constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*& __get__cacheLarge();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& __get__cacheLarge() const;

  constexpr void __set__cacheLarge(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* value);

  constexpr ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*& __get__cacheMax();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& __get__cacheMax() const;

  constexpr void __set__cacheMax(::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* value);

  static inline void setStaticF_instance(::GlobalNamespace::SmallBufferPool* value);

  static inline ::GlobalNamespace::SmallBufferPool* getStaticF_instance();

  /// @brief Method GetBuffer, addr 0xe56ca8, size 0x270, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBuffer(int32_t length);

  /// @brief Method ReleaseBuffer, addr 0xe56f18, size 0x4, virtual false, abstract: false, final false
  inline void ReleaseBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method ReleaseBuffer, addr 0xe570e0, size 0x1c, virtual false, abstract: false, final false
  inline void ReleaseBuffer(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> buffer);

  /// @brief Method ReleaseBufferInternal, addr 0xe56f1c, size 0x1c4, virtual false, abstract: false, final false
  inline void ReleaseBufferInternal(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  static inline ::GlobalNamespace::SmallBufferPool* New_ctor();

  /// @brief Method .ctor, addr 0xe570fc, size 0xe8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SmallBufferPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SmallBufferPool(SmallBufferPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SmallBufferPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SmallBufferPool(SmallBufferPool const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SmallBufferPool();

public:
  /// @brief Field _cacheSmall, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* ____cacheSmall;

  /// @brief Field _cacheMedium, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* ____cacheMedium;

  /// @brief Field _cacheLarge, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* ____cacheLarge;

  /// @brief Field _cacheMax, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ArrayW<uint8_t, ::Array<uint8_t>*>>* ____cacheMax;

  /// @brief Field kCacheSmallSize offset 0xffffffff size 0x4
  static constexpr int32_t kCacheSmallSize{ static_cast<int32_t>(0x200) };

  /// @brief Field kCacheMediumSize offset 0xffffffff size 0x4
  static constexpr int32_t kCacheMediumSize{ static_cast<int32_t>(0x400) };

  /// @brief Field kCacheLargeSize offset 0xffffffff size 0x4
  static constexpr int32_t kCacheLargeSize{ static_cast<int32_t>(0x800) };

  /// @brief Field kCacheMaxSize offset 0xffffffff size 0x4
  static constexpr int32_t kCacheMaxSize{ static_cast<int32_t>(0x1000) };

  /// @brief Field kCacheSmallMaxCapacity offset 0xffffffff size 0x4
  static constexpr int32_t kCacheSmallMaxCapacity{ static_cast<int32_t>(0x80) };

  /// @brief Field kCacheMediumMaxCapacity offset 0xffffffff size 0x4
  static constexpr int32_t kCacheMediumMaxCapacity{ static_cast<int32_t>(0x20) };

  /// @brief Field kCacheLargeMaxCapacity offset 0xffffffff size 0x4
  static constexpr int32_t kCacheLargeMaxCapacity{ static_cast<int32_t>(0x10) };

  /// @brief Field kCacheMaxMaxCapacity offset 0xffffffff size 0x4
  static constexpr int32_t kCacheMaxMaxCapacity{ static_cast<int32_t>(0x8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SmallBufferPool, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SmallBufferPool, ____cacheSmall) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmallBufferPool, ____cacheMedium) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmallBufferPool, ____cacheLarge) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SmallBufferPool, ____cacheMax) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SmallBufferPool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SmallBufferPool*, "", "SmallBufferPool");

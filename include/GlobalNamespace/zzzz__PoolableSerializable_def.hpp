#pragma once
// IWYU pragma private; include "GlobalNamespace/PoolableSerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PoolableSerializable)
namespace GlobalNamespace {
class IPoolableSerializable;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace System::Collections::Concurrent {
template <typename T> class ConcurrentBag_1;
}
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class PoolableSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PoolableSerializable);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PoolableSerializable
class CORDL_TYPE PoolableSerializable : public ::System::Object {
public:
  // Declarations
  /// @brief Field _pools, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__pools, put = setStaticF__pools)) ::System::Collections::Concurrent::ConcurrentDictionary_2<
      ::System::Type*, ::System::Collections::Concurrent::ConcurrentBag_1<::GlobalNamespace::IPoolableSerializable*>*>* _pools;

  /// @brief Field _referenceCount, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__referenceCount, put = __cordl_internal_set__referenceCount)) int32_t _referenceCount;

  /// @brief Convert operator to "::GlobalNamespace::IPoolableSerializable"
  constexpr operator ::GlobalNamespace::IPoolableSerializable*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Deserialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  /// @brief Method GetPool, addr 0x36807a0, size 0x1ec, virtual false, abstract: false, final false
  static inline ::System::Collections::Concurrent::ConcurrentBag_1<::GlobalNamespace::IPoolableSerializable*>* GetPool(::System::Type* t);

  static inline ::GlobalNamespace::PoolableSerializable* New_ctor();

  /// @brief Method NoDomainReloadInit, addr 0x3680648, size 0x80, virtual false, abstract: false, final false
  static inline void NoDomainReloadInit();

  /// @brief Method Obtain, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Obtain();

  /// @brief Method Release, addr 0x36800dc, size 0x74, virtual true, abstract: false, final false
  inline void Release();

  /// @brief Method Release, addr 0x36806c8, size 0xd8, virtual false, abstract: false, final false
  static inline void Release(::GlobalNamespace::IPoolableSerializable* t);

  /// @brief Method Retain, addr 0x36801f8, size 0x10, virtual true, abstract: false, final false
  inline void Retain();

  /// @brief Method Serialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  constexpr int32_t const& __cordl_internal_get__referenceCount() const;

  constexpr int32_t& __cordl_internal_get__referenceCount();

  constexpr void __cordl_internal_set__referenceCount(int32_t value);

  /// @brief Method .ctor, addr 0x367e8fc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Collections::Concurrent::ConcurrentBag_1<::GlobalNamespace::IPoolableSerializable*>*>*
  getStaticF__pools();

  /// @brief Convert to "::GlobalNamespace::IPoolableSerializable"
  constexpr ::GlobalNamespace::IPoolableSerializable* i___GlobalNamespace__IPoolableSerializable() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

  static inline void
  setStaticF__pools(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::System::Collections::Concurrent::ConcurrentBag_1<::GlobalNamespace::IPoolableSerializable*>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoolableSerializable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PoolableSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoolableSerializable(PoolableSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoolableSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoolableSerializable(PoolableSerializable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20877 };

  /// @brief Field kPoolSize offset 0xffffffff size 0x4
  static constexpr int32_t kPoolSize{ static_cast<int32_t>(0x20) };

  /// @brief Field _referenceCount, offset: 0x10, size: 0x4, def value: None
  int32_t ____referenceCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PoolableSerializable, ____referenceCount) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PoolableSerializable, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PoolableSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PoolableSerializable*, "", "PoolableSerializable");

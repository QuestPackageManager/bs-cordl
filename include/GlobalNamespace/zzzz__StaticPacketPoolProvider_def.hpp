#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticPacketPoolProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(StaticPacketPoolProvider)
namespace GlobalNamespace {
class IPacketPool;
}
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
namespace System::Collections::Concurrent {
template <typename TKey, typename TValue> class ConcurrentDictionary_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class StaticPacketPoolProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StaticPacketPoolProvider);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StaticPacketPoolProvider
class CORDL_TYPE StaticPacketPoolProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _staticPools, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__staticPools,
                      put = setStaticF__staticPools)) ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::GlobalNamespace::IPacketPool*>* _staticPools;

  /// @brief Method GetPacketPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::GlobalNamespace::PacketPool_1<T>* GetPacketPool();

  /// @brief Method TryGetPacketPool, addr 0x22cf04c, size 0x90, virtual false, abstract: false, final false
  static inline bool TryGetPacketPool(::System::Type* t, ::ByRef<::GlobalNamespace::IPacketPool*> pool);

  static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::GlobalNamespace::IPacketPool*>* getStaticF__staticPools();

  static inline void setStaticF__staticPools(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Type*, ::GlobalNamespace::IPacketPool*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StaticPacketPoolProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StaticPacketPoolProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StaticPacketPoolProvider(StaticPacketPoolProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StaticPacketPoolProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StaticPacketPoolProvider(StaticPacketPoolProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14816 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StaticPacketPoolProvider, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StaticPacketPoolProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticPacketPoolProvider*, "", "StaticPacketPoolProvider");

#pragma once
// IWYU pragma private; include "GlobalNamespace/ThreadStaticPacketPool_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ThreadStaticPacketPool_1)
namespace GlobalNamespace {
template <typename T> class PacketPool_1;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class ThreadStaticPacketPool_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::ThreadStaticPacketPool_1);
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ThreadStaticPacketPool`1<T>
class CORDL_TYPE ThreadStaticPacketPool_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_pool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::PacketPool_1<T>* get_pool();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreadStaticPacketPool_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ThreadStaticPacketPool_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreadStaticPacketPool_1(ThreadStaticPacketPool_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreadStaticPacketPool_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreadStaticPacketPool_1(ThreadStaticPacketPool_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14812 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ThreadStaticPacketPool_1, "", "ThreadStaticPacketPool`1");

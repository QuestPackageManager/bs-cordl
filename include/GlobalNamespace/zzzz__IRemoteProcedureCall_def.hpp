#pragma once
// IWYU pragma private; include "GlobalNamespace/IRemoteProcedureCall.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IRemoteProcedureCall)
namespace GlobalNamespace {
class IPoolablePacket;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class IRemoteProcedureCall;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IRemoteProcedureCall);
// Type: ::IRemoteProcedureCall
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IRemoteProcedureCall*
class CORDL_TYPE IRemoteProcedureCall {
public:
  // Declarations
  __declspec(property(get = get_syncTime)) int64_t syncTime;

  /// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
  constexpr operator ::GlobalNamespace::IPoolablePacket*() noexcept;

  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method get_syncTime, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t get_syncTime();

  /// @brief Convert to "::GlobalNamespace::IPoolablePacket"
  constexpr ::GlobalNamespace::IPoolablePacket* i___GlobalNamespace__IPoolablePacket() noexcept;

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IRemoteProcedureCall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRemoteProcedureCall(IRemoteProcedureCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRemoteProcedureCall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRemoteProcedureCall(IRemoteProcedureCall const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14779 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IRemoteProcedureCall);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IRemoteProcedureCall*, "", "IRemoteProcedureCall");

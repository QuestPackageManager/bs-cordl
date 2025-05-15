#pragma once
// IWYU pragma private; include "GlobalNamespace/IPoolableSerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
CORDL_MODULE_EXPORT(IPoolableSerializable)
// Forward declare root types
namespace GlobalNamespace {
class IPoolableSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IPoolableSerializable);
// Dependencies LiteNetLib.Utils.INetSerializable
namespace GlobalNamespace {
// Is value type: false
// CS Name: IPoolableSerializable
class CORDL_TYPE IPoolableSerializable {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Release, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Release();

  /// @brief Method Retain, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Retain();

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IPoolableSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPoolableSerializable(IPoolableSerializable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16996 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IPoolableSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPoolableSerializable*, "", "IPoolableSerializable");

#pragma once
// IWYU pragma private; include "LiteNetLib/Layers/XorEncryptLayer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LiteNetLib/Layers/zzzz__PacketLayerBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XorEncryptLayer)
namespace System::Net {
class IPEndPoint;
}
// Forward declare root types
namespace LiteNetLib::Layers {
class XorEncryptLayer;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::Layers::XorEncryptLayer);
// Dependencies LiteNetLib.Layers.PacketLayerBase
namespace LiteNetLib::Layers {
// Is value type: false
// CS Name: LiteNetLib.Layers.XorEncryptLayer
class CORDL_TYPE XorEncryptLayer : public ::LiteNetLib::Layers::PacketLayerBase {
public:
  // Declarations
  /// @brief Field _byteKey, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__byteKey, put = __cordl_internal_set__byteKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _byteKey;

  static inline ::LiteNetLib::Layers::XorEncryptLayer* New_ctor();

  static inline ::LiteNetLib::Layers::XorEncryptLayer* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  static inline ::LiteNetLib::Layers::XorEncryptLayer* New_ctor(::StringW key);

  /// @brief Method ProcessInboundPacket, addr 0x3ac0520, size 0x90, virtual true, abstract: false, final false
  inline void ProcessInboundPacket(::System::Net::IPEndPoint* remoteEndPoint, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data, ::ByRef<int32_t> offset, ::ByRef<int32_t> length);

  /// @brief Method ProcessOutBoundPacket, addr 0x3ac05b0, size 0x8c, virtual true, abstract: false, final false
  inline void ProcessOutBoundPacket(::System::Net::IPEndPoint* remoteEndPoint, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> data, ::ByRef<int32_t> offset, ::ByRef<int32_t> length);

  /// @brief Method SetKey, addr 0x3ac0418, size 0x94, virtual false, abstract: false, final false
  inline void SetKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method SetKey, addr 0x3ac04dc, size 0x44, virtual false, abstract: false, final false
  inline void SetKey(::StringW key);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__byteKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__byteKey();

  constexpr void __cordl_internal_set__byteKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x3ac03cc, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3ac03e8, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method .ctor, addr 0x3ac04ac, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW key);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XorEncryptLayer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XorEncryptLayer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XorEncryptLayer(XorEncryptLayer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XorEncryptLayer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XorEncryptLayer(XorEncryptLayer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16629 };

  /// @brief Field _byteKey, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____byteKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LiteNetLib::Layers::XorEncryptLayer, ____byteKey) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LiteNetLib::Layers::XorEncryptLayer, 0x20>, "Size mismatch!");

} // namespace LiteNetLib::Layers
NEED_NO_BOX(::LiteNetLib::Layers::XorEncryptLayer);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Layers::XorEncryptLayer*, "LiteNetLib.Layers", "XorEncryptLayer");

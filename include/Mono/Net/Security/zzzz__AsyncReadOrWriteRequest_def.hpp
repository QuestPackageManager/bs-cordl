#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Net/Security/zzzz__AsyncProtocolRequest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncReadOrWriteRequest)
namespace Mono::Net::Security {
class MobileAuthenticatedStream;
}
namespace Mono::Net::Security {
class BufferOffsetSize;
}
// Forward declare root types
namespace Mono::Net::Security {
class AsyncReadOrWriteRequest;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::AsyncReadOrWriteRequest);
// Type: Mono.Net.Security::AsyncReadOrWriteRequest
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8822))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8824))
// CS Name: ::Mono.Net.Security::AsyncReadOrWriteRequest*
class CORDL_TYPE AsyncReadOrWriteRequest : public ::Mono::Net::Security::AsyncProtocolRequest {
public:
  // Declarations
  /// @brief Field <UserBuffer>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __get__UserBuffer_k__BackingField, put = __set__UserBuffer_k__BackingField))::Mono::Net::Security::BufferOffsetSize* _UserBuffer_k__BackingField;

  /// @brief Field <CurrentSize>k__BackingField, offset 0x40, size 0x4
  __declspec(property(get = __get__CurrentSize_k__BackingField, put = __set__CurrentSize_k__BackingField)) int32_t _CurrentSize_k__BackingField;

  __declspec(property(get = get_UserBuffer))::Mono::Net::Security::BufferOffsetSize* UserBuffer;

  __declspec(property(get = get_CurrentSize, put = set_CurrentSize)) int32_t CurrentSize;

  constexpr ::Mono::Net::Security::BufferOffsetSize*& __get__UserBuffer_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Net::Security::BufferOffsetSize*> const& __get__UserBuffer_k__BackingField() const;

  constexpr void __set__UserBuffer_k__BackingField(::Mono::Net::Security::BufferOffsetSize* value);

  constexpr int32_t& __get__CurrentSize_k__BackingField();

  constexpr int32_t const& __get__CurrentSize_k__BackingField() const;

  constexpr void __set__CurrentSize_k__BackingField(int32_t value);

  /// @brief Method get_UserBuffer addr 0x281fa58 size 0x8 virtual false final false
  inline ::Mono::Net::Security::BufferOffsetSize* get_UserBuffer();

  /// @brief Method get_CurrentSize addr 0x281fa60 size 0x8 virtual false final false
  inline int32_t get_CurrentSize();

  /// @brief Method set_CurrentSize addr 0x281fa68 size 0x8 virtual false final false
  inline void set_CurrentSize(int32_t value);

  static inline ::Mono::Net::Security::AsyncReadOrWriteRequest* New_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer,
                                                                         int32_t offset, int32_t size);

  /// @brief Method .ctor addr 0x281fa70 size 0xa4 virtual false final false
  inline void _ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method ToString addr 0x281fb14 size 0x5c virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "AsyncReadOrWriteRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncReadOrWriteRequest(AsyncReadOrWriteRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncReadOrWriteRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncReadOrWriteRequest(AsyncReadOrWriteRequest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncReadOrWriteRequest();

public:
  /// @brief Field <UserBuffer>k__BackingField, offset: 0x38, size: 0x8, def value: None
  ::Mono::Net::Security::BufferOffsetSize* ____UserBuffer_k__BackingField;

  /// @brief Field <CurrentSize>k__BackingField, offset: 0x40, size: 0x4, def value: None
  int32_t ____CurrentSize_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::AsyncReadOrWriteRequest, 0x48>, "Size mismatch!");

} // namespace Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::AsyncReadOrWriteRequest);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::AsyncReadOrWriteRequest*, "Mono.Net.Security", "AsyncReadOrWriteRequest");

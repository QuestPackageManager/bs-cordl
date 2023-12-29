#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InternalDecoderBestFitFallbackBuffer)
namespace System {
class Object;
}
namespace System::Text {
class InternalDecoderBestFitFallback;
}
// Forward declare root types
namespace System::Text {
class InternalDecoderBestFitFallbackBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::InternalDecoderBestFitFallbackBuffer);
// Type: System.Text::InternalDecoderBestFitFallbackBuffer
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2830))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2825))
// CS Name: ::System.Text::InternalDecoderBestFitFallbackBuffer*
class CORDL_TYPE InternalDecoderBestFitFallbackBuffer : public ::System::Text::DecoderFallbackBuffer {
public:
  // Declarations
  /// @brief Field _cBestFit, offset 0x20, size 0x2
  __declspec(property(get = __get__cBestFit, put = __set__cBestFit)) char16_t _cBestFit;

  /// @brief Field _iCount, offset 0x24, size 0x4
  __declspec(property(get = __get__iCount, put = __set__iCount)) int32_t _iCount;

  /// @brief Field _iSize, offset 0x28, size 0x4
  __declspec(property(get = __get__iSize, put = __set__iSize)) int32_t _iSize;

  /// @brief Field _oFallback, offset 0x30, size 0x8
  __declspec(property(get = __get__oFallback, put = __set__oFallback))::System::Text::InternalDecoderBestFitFallback* _oFallback;

  /// @brief Field s_InternalSyncObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InternalSyncObject, put = setStaticF_s_InternalSyncObject))::System::Object* s_InternalSyncObject;

  __declspec(property(get = get_Remaining)) int32_t Remaining;

  constexpr char16_t& __get__cBestFit();

  constexpr char16_t const& __get__cBestFit() const;

  constexpr void __set__cBestFit(char16_t value);

  constexpr int32_t& __get__iCount();

  constexpr int32_t const& __get__iCount() const;

  constexpr void __set__iCount(int32_t value);

  constexpr int32_t& __get__iSize();

  constexpr int32_t const& __get__iSize() const;

  constexpr void __set__iSize(int32_t value);

  constexpr ::System::Text::InternalDecoderBestFitFallback*& __get__oFallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::InternalDecoderBestFitFallback*> const& __get__oFallback() const;

  constexpr void __set__oFallback(::System::Text::InternalDecoderBestFitFallback* value);

  static inline void setStaticF_s_InternalSyncObject(::System::Object* value);

  static inline ::System::Object* getStaticF_s_InternalSyncObject();

  /// @brief Method get_InternalSyncObject addr 0x24d6c90 size 0x9c virtual false final false
  static inline ::System::Object* get_InternalSyncObject();

  static inline ::System::Text::InternalDecoderBestFitFallbackBuffer* New_ctor(::System::Text::InternalDecoderBestFitFallback* fallback);

  /// @brief Method .ctor addr 0x24d6a94 size 0x128 virtual false final false
  inline void _ctor(::System::Text::InternalDecoderBestFitFallback* fallback);

  /// @brief Method Fallback addr 0x24d6d34 size 0x40 virtual true final false
  inline bool Fallback(::ArrayW<uint8_t, ::Array<uint8_t>*> bytesUnknown, int32_t index);

  /// @brief Method GetNextChar addr 0x24d6eb4 size 0x40 virtual true final false
  inline char16_t GetNextChar();

  /// @brief Method get_Remaining addr 0x24d6ef4 size 0xc virtual true final false
  inline int32_t get_Remaining();

  /// @brief Method Reset addr 0x24d6f00 size 0x10 virtual true final false
  inline void Reset();

  /// @brief Method InternalFallback addr 0x24d6f10 size 0x8 virtual true final false
  inline int32_t InternalFallback(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, ::cordl_internals::Ptr<uint8_t> pBytes);

  /// @brief Method TryBestFit addr 0x24d6d74 size 0x140 virtual false final false
  inline char16_t TryBestFit(::ArrayW<uint8_t, ::Array<uint8_t>*> bytesCheck);

  // Ctor Parameters [CppParam { name: "", ty: "InternalDecoderBestFitFallbackBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalDecoderBestFitFallbackBuffer(InternalDecoderBestFitFallbackBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalDecoderBestFitFallbackBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalDecoderBestFitFallbackBuffer(InternalDecoderBestFitFallbackBuffer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalDecoderBestFitFallbackBuffer();

public:
  /// @brief Field _cBestFit, offset: 0x20, size: 0x2, def value: None
  char16_t ____cBestFit;

  /// @brief Field _iCount, offset: 0x24, size: 0x4, def value: None
  int32_t ____iCount;

  /// @brief Field _iSize, offset: 0x28, size: 0x4, def value: None
  int32_t ____iSize;

  /// @brief Field _oFallback, offset: 0x30, size: 0x8, def value: None
  ::System::Text::InternalDecoderBestFitFallback* ____oFallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::InternalDecoderBestFitFallbackBuffer, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Text::InternalDecoderBestFitFallbackBuffer, ____cBestFit) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Text::InternalDecoderBestFitFallbackBuffer, ____iCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Text::InternalDecoderBestFitFallbackBuffer, ____iSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Text::InternalDecoderBestFitFallbackBuffer, ____oFallback) == 0x30, "Offset mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::InternalDecoderBestFitFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::InternalDecoderBestFitFallbackBuffer*, "System.Text", "InternalDecoderBestFitFallbackBuffer");

#pragma once
// IWYU pragma private; include "System/Text/InternalDecoderBestFitFallbackBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InternalDecoderBestFitFallbackBuffer)
namespace System::Text {
class InternalDecoderBestFitFallback;
}
namespace System {
class Object;
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
// CS Name: ::System.Text::InternalDecoderBestFitFallbackBuffer*
class CORDL_TYPE InternalDecoderBestFitFallbackBuffer : public ::System::Text::DecoderFallbackBuffer {
public:
  // Declarations
  __declspec(property(get = get_Remaining)) int32_t Remaining;

  /// @brief Field _cBestFit, offset 0x20, size 0x2
  __declspec(property(get = __cordl_internal_get__cBestFit, put = __cordl_internal_set__cBestFit)) char16_t _cBestFit;

  /// @brief Field _iCount, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__iCount, put = __cordl_internal_set__iCount)) int32_t _iCount;

  /// @brief Field _iSize, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__iSize, put = __cordl_internal_set__iSize)) int32_t _iSize;

  /// @brief Field _oFallback, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__oFallback, put = __cordl_internal_set__oFallback))::System::Text::InternalDecoderBestFitFallback* _oFallback;

  /// @brief Field s_InternalSyncObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InternalSyncObject, put = setStaticF_s_InternalSyncObject))::System::Object* s_InternalSyncObject;

  /// @brief Method Fallback, addr 0x29ea7e0, size 0x40, virtual true, abstract: false, final false
  inline bool Fallback(::ArrayW<uint8_t, ::Array<uint8_t>*> bytesUnknown, int32_t index);

  /// @brief Method GetNextChar, addr 0x29ea960, size 0x40, virtual true, abstract: false, final false
  inline char16_t GetNextChar();

  /// @brief Method InternalFallback, addr 0x29ea9bc, size 0x8, virtual true, abstract: false, final false
  inline int32_t InternalFallback(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, ::cordl_internals::Ptr<uint8_t> pBytes);

  static inline ::System::Text::InternalDecoderBestFitFallbackBuffer* New_ctor(::System::Text::InternalDecoderBestFitFallback* fallback);

  /// @brief Method Reset, addr 0x29ea9ac, size 0x10, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method TryBestFit, addr 0x29ea820, size 0x140, virtual false, abstract: false, final false
  inline char16_t TryBestFit(::ArrayW<uint8_t, ::Array<uint8_t>*> bytesCheck);

  constexpr char16_t const& __cordl_internal_get__cBestFit() const;

  constexpr char16_t& __cordl_internal_get__cBestFit();

  constexpr int32_t const& __cordl_internal_get__iCount() const;

  constexpr int32_t& __cordl_internal_get__iCount();

  constexpr int32_t const& __cordl_internal_get__iSize() const;

  constexpr int32_t& __cordl_internal_get__iSize();

  constexpr ::System::Text::InternalDecoderBestFitFallback*& __cordl_internal_get__oFallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::InternalDecoderBestFitFallback*> const& __cordl_internal_get__oFallback() const;

  constexpr void __cordl_internal_set__cBestFit(char16_t value);

  constexpr void __cordl_internal_set__iCount(int32_t value);

  constexpr void __cordl_internal_set__iSize(int32_t value);

  constexpr void __cordl_internal_set__oFallback(::System::Text::InternalDecoderBestFitFallback* value);

  /// @brief Method .ctor, addr 0x29ea540, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::InternalDecoderBestFitFallback* fallback);

  static inline ::System::Object* getStaticF_s_InternalSyncObject();

  /// @brief Method get_InternalSyncObject, addr 0x29ea73c, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Object* get_InternalSyncObject();

  /// @brief Method get_Remaining, addr 0x29ea9a0, size 0xc, virtual true, abstract: false, final false
  inline int32_t get_Remaining();

  static inline void setStaticF_s_InternalSyncObject(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalDecoderBestFitFallbackBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalDecoderBestFitFallbackBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalDecoderBestFitFallbackBuffer(InternalDecoderBestFitFallbackBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalDecoderBestFitFallbackBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalDecoderBestFitFallbackBuffer(InternalDecoderBestFitFallbackBuffer const&) = delete;

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

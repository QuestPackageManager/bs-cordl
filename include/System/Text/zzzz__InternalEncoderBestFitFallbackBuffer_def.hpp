#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InternalEncoderBestFitFallbackBuffer)
namespace System::Text {
class InternalEncoderBestFitFallback;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Text {
class InternalEncoderBestFitFallbackBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::InternalEncoderBestFitFallbackBuffer);
// Type: System.Text::InternalEncoderBestFitFallbackBuffer
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Text {
// Is value type: false
// CS Name: ::System.Text::InternalEncoderBestFitFallbackBuffer*
class CORDL_TYPE InternalEncoderBestFitFallbackBuffer : public ::System::Text::EncoderFallbackBuffer {
public:
  // Declarations
  __declspec(property(get = get_Remaining)) int32_t Remaining;

  /// @brief Field _cBestFit, offset 0x30, size 0x2
  __declspec(property(get = __cordl_internal_get__cBestFit, put = __cordl_internal_set__cBestFit)) char16_t _cBestFit;

  /// @brief Field _iCount, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__iCount, put = __cordl_internal_set__iCount)) int32_t _iCount;

  /// @brief Field _iSize, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__iSize, put = __cordl_internal_set__iSize)) int32_t _iSize;

  /// @brief Field _oFallback, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__oFallback, put = __cordl_internal_set__oFallback))::System::Text::InternalEncoderBestFitFallback* _oFallback;

  /// @brief Field s_InternalSyncObject, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_InternalSyncObject, put = setStaticF_s_InternalSyncObject))::System::Object* s_InternalSyncObject;

  /// @brief Method Fallback, addr 0x2788228, size 0x30, virtual true, abstract: false, final false
  inline bool Fallback(char16_t charUnknown, int32_t index);

  /// @brief Method Fallback, addr 0x278832c, size 0x1e0, virtual true, abstract: false, final false
  inline bool Fallback(char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index);

  /// @brief Method GetNextChar, addr 0x278850c, size 0x40, virtual true, abstract: false, final false
  inline char16_t GetNextChar();

  /// @brief Method MovePrevious, addr 0x278854c, size 0x2c, virtual true, abstract: false, final false
  inline bool MovePrevious();

  static inline ::System::Text::InternalEncoderBestFitFallbackBuffer* New_ctor(::System::Text::InternalEncoderBestFitFallback* fallback);

  /// @brief Method Reset, addr 0x2788584, size 0x14, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method TryBestFit, addr 0x2788258, size 0xd4, virtual false, abstract: false, final false
  inline char16_t TryBestFit(char16_t cUnknown);

  constexpr char16_t const& __cordl_internal_get__cBestFit() const;

  constexpr char16_t& __cordl_internal_get__cBestFit();

  constexpr int32_t const& __cordl_internal_get__iCount() const;

  constexpr int32_t& __cordl_internal_get__iCount();

  constexpr int32_t const& __cordl_internal_get__iSize() const;

  constexpr int32_t& __cordl_internal_get__iSize();

  constexpr ::System::Text::InternalEncoderBestFitFallback*& __cordl_internal_get__oFallback();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::InternalEncoderBestFitFallback*> const& __cordl_internal_get__oFallback() const;

  constexpr void __cordl_internal_set__cBestFit(char16_t value);

  constexpr void __cordl_internal_set__iCount(int32_t value);

  constexpr void __cordl_internal_set__iSize(int32_t value);

  constexpr void __cordl_internal_set__oFallback(::System::Text::InternalEncoderBestFitFallback* value);

  /// @brief Method .ctor, addr 0x2787f6c, size 0x128, virtual false, abstract: false, final false
  inline void _ctor(::System::Text::InternalEncoderBestFitFallback* fallback);

  static inline ::System::Object* getStaticF_s_InternalSyncObject();

  /// @brief Method get_InternalSyncObject, addr 0x2788184, size 0x9c, virtual false, abstract: false, final false
  static inline ::System::Object* get_InternalSyncObject();

  /// @brief Method get_Remaining, addr 0x2788578, size 0xc, virtual true, abstract: false, final false
  inline int32_t get_Remaining();

  static inline void setStaticF_s_InternalSyncObject(::System::Object* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalEncoderBestFitFallbackBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InternalEncoderBestFitFallbackBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InternalEncoderBestFitFallbackBuffer(InternalEncoderBestFitFallbackBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InternalEncoderBestFitFallbackBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InternalEncoderBestFitFallbackBuffer(InternalEncoderBestFitFallbackBuffer const&) = delete;

  /// @brief Field _cBestFit, offset: 0x30, size: 0x2, def value: None
  char16_t ____cBestFit;

  /// @brief Field _oFallback, offset: 0x38, size: 0x8, def value: None
  ::System::Text::InternalEncoderBestFitFallback* ____oFallback;

  /// @brief Field _iCount, offset: 0x40, size: 0x4, def value: None
  int32_t ____iCount;

  /// @brief Field _iSize, offset: 0x44, size: 0x4, def value: None
  int32_t ____iSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::InternalEncoderBestFitFallbackBuffer, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Text::InternalEncoderBestFitFallbackBuffer, ____cBestFit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Text::InternalEncoderBestFitFallbackBuffer, ____oFallback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Text::InternalEncoderBestFitFallbackBuffer, ____iCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Text::InternalEncoderBestFitFallbackBuffer, ____iSize) == 0x44, "Offset mismatch!");

} // namespace System::Text
NEED_NO_BOX(::System::Text::InternalEncoderBestFitFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::InternalEncoderBestFitFallbackBuffer*, "System.Text", "InternalEncoderBestFitFallbackBuffer");

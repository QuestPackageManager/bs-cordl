#pragma once
// IWYU pragma private; include "Tayx\Graphy\Utils\NumString\G_FloatString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(G_FloatString)
// Forward declare root types
namespace Tayx::Graphy::Utils::NumString {
class G_FloatString;
}
// Write type traits
MARK_REF_T(::Tayx::Graphy::Utils::NumString::G_FloatString*);
DEFINE_IL2CPP_CLASS(::Tayx::Graphy::Utils::NumString::G_FloatString*, "Tayx.Graphy.Utils.NumString", "G_FloatString");
// Dependencies System.Object
namespace Tayx::Graphy::Utils::NumString {
// Is value type: false
// CS Name: Tayx.Graphy.Utils.NumString.G_FloatString
class CORDL_TYPE G_FloatString : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_decimalMultiplier, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_m_decimalMultiplier, put = setStaticF_m_decimalMultiplier)) float_t m_decimalMultiplier;

  /// @brief Field m_negativeBuffer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_negativeBuffer, put = setStaticF_m_negativeBuffer)) ::ArrayW<::StringW> m_negativeBuffer;

  /// @brief Field m_positiveBuffer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_positiveBuffer, put = setStaticF_m_positiveBuffer)) ::ArrayW<::StringW> m_positiveBuffer;

  /// @brief Method Dispose, addr 0x643a810, size 0xa0, virtual false, abstract: false, final false
  static inline void Dispose();

  /// @brief Method FromIndex, addr 0x643e1a0, size 0x68, virtual false, abstract: false, final false
  static inline float_t FromIndex(int32_t i);

  /// @brief Method Init, addr 0x643e274, size 0x240, virtual false, abstract: false, final false
  static inline void Init(float_t minNegativeValue, float_t maxPositiveValue);

  /// @brief Method ToFloat, addr 0x643e820, size 0x8, virtual false, abstract: false, final false
  static inline float_t ToFloat(int32_t i);

  /// @brief Method ToIndex, addr 0x643e4b4, size 0xc8, virtual false, abstract: false, final false
  static inline int32_t ToIndex(float_t f);

  /// @brief Method ToInt, addr 0x643e804, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t ToInt(float_t f);

  /// @brief Method ToStringNonAlloc, addr 0x643e57c, size 0x144, virtual false, abstract: false, final false
  static inline ::StringW ToStringNonAlloc(float_t value);

  /// @brief Method ToStringNonAlloc, addr 0x643e6c0, size 0x144, virtual false, abstract: false, final false
  static inline ::StringW ToStringNonAlloc(float_t value, ::StringW format);

  static inline float_t getStaticF_m_decimalMultiplier();

  static inline ::ArrayW<::StringW> getStaticF_m_negativeBuffer();

  static inline ::ArrayW<::StringW> getStaticF_m_positiveBuffer();

  /// @brief Method get_MaxValue, addr 0x643e208, size 0x6c, virtual false, abstract: false, final false
  static inline float_t get_MaxValue();

  /// @brief Method get_MinValue, addr 0x643e12c, size 0x74, virtual false, abstract: false, final false
  static inline float_t get_MinValue();

  static inline void setStaticF_m_decimalMultiplier(float_t value);

  static inline void setStaticF_m_negativeBuffer(::ArrayW<::StringW> value);

  static inline void setStaticF_m_positiveBuffer(::ArrayW<::StringW> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_FloatString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "G_FloatString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_FloatString(G_FloatString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_FloatString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_FloatString(G_FloatString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21489 };

  /// @brief Field m_floatFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString m_floatFormat{ u"0.0" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Tayx::Graphy::Utils::NumString::G_FloatString) == 0x10, "Size mismatch!");

} // namespace Tayx::Graphy::Utils::NumString

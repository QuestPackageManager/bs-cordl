#pragma once
// IWYU pragma private; include "Tayx/Graphy/Utils/NumString/G_IntString.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(G_IntString)
// Forward declare root types
namespace Tayx::Graphy::Utils::NumString {
class G_IntString;
}
// Write type traits
MARK_REF_T(::Tayx::Graphy::Utils::NumString::G_IntString*);
DEFINE_IL2CPP_CLASS(::Tayx::Graphy::Utils::NumString::G_IntString*, "Tayx.Graphy.Utils.NumString", "G_IntString");
// Dependencies System.Object
namespace Tayx::Graphy::Utils::NumString {
// Is value type: false
// CS Name: Tayx.Graphy.Utils.NumString.G_IntString
class CORDL_TYPE G_IntString : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_negativeBuffer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_negativeBuffer, put = setStaticF_m_negativeBuffer)) ::ArrayW<::StringW> m_negativeBuffer;

  /// @brief Field m_positiveBuffer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_positiveBuffer, put = setStaticF_m_positiveBuffer)) ::ArrayW<::StringW> m_positiveBuffer;

  /// @brief Method Dispose, addr 0x6434f58, size 0xa0, virtual false, abstract: false, final false
  static inline void Dispose();

  /// @brief Method Init, addr 0x6439184, size 0x230, virtual false, abstract: false, final false
  static inline void Init(int32_t minNegativeValue, int32_t maxPositiveValue);

  /// @brief Method ToStringNonAlloc, addr 0x64393b4, size 0x124, virtual false, abstract: false, final false
  static inline ::StringW ToStringNonAlloc(int32_t value);

  static inline ::ArrayW<::StringW> getStaticF_m_negativeBuffer();

  static inline ::ArrayW<::StringW> getStaticF_m_positiveBuffer();

  /// @brief Method get_MaxValue, addr 0x643911c, size 0x68, virtual false, abstract: false, final false
  static inline int32_t get_MaxValue();

  /// @brief Method get_MinValue, addr 0x64390ac, size 0x70, virtual false, abstract: false, final false
  static inline int32_t get_MinValue();

  static inline void setStaticF_m_negativeBuffer(::ArrayW<::StringW> value);

  static inline void setStaticF_m_positiveBuffer(::ArrayW<::StringW> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_IntString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "G_IntString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_IntString(G_IntString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_IntString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_IntString(G_IntString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21441 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Tayx::Graphy::Utils::NumString::G_IntString) == 0x10, "Size mismatch!");

} // namespace Tayx::Graphy::Utils::NumString

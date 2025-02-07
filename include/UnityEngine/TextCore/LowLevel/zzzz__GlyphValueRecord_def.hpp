#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/GlyphValueRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphValueRecord)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct GlyphValueRecord;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::GlyphValueRecord);
// Dependencies System.IEquatable`1<T>
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// CS Name: UnityEngine.TextCore.LowLevel.GlyphValueRecord
struct CORDL_TYPE GlyphValueRecord {
public:
  // Declarations
  __declspec(property(get = get_xAdvance)) float_t xAdvance;

  __declspec(property(get = get_xPlacement, put = set_xPlacement)) float_t xPlacement;

  __declspec(property(get = get_yAdvance)) float_t yAdvance;

  __declspec(property(get = get_yPlacement, put = set_yPlacement)) float_t yPlacement;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphValueRecord>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphValueRecord>*();

  /// @brief Method Equals, addr 0x4926848, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x49268c0, size 0xa8, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::TextCore::LowLevel::GlyphValueRecord other);

  /// @brief Method GetHashCode, addr 0x49267e4, size 0x64, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method get_xAdvance, addr 0x49267c0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_xAdvance();

  /// @brief Method get_xPlacement, addr 0x49267a0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_xPlacement();

  /// @brief Method get_yAdvance, addr 0x49267c8, size 0x8, virtual false, abstract: false, final false
  inline float_t get_yAdvance();

  /// @brief Method get_yPlacement, addr 0x49267b0, size 0x8, virtual false, abstract: false, final false
  inline float_t get_yPlacement();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphValueRecord>"
  constexpr ::System::IEquatable_1<::UnityEngine::TextCore::LowLevel::GlyphValueRecord>* i___System__IEquatable_1___UnityEngine__TextCore__LowLevel__GlyphValueRecord_();

  /// @brief Method op_Addition, addr 0x49267d0, size 0x14, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::LowLevel::GlyphValueRecord op_Addition(::UnityEngine::TextCore::LowLevel::GlyphValueRecord a, ::UnityEngine::TextCore::LowLevel::GlyphValueRecord b);

  /// @brief Method set_xPlacement, addr 0x49267a8, size 0x8, virtual false, abstract: false, final false
  inline void set_xPlacement(float_t value);

  /// @brief Method set_yPlacement, addr 0x49267b8, size 0x8, virtual false, abstract: false, final false
  inline void set_yPlacement(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlyphValueRecord();

  // Ctor Parameters [CppParam { name: "m_XPlacement", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_YPlacement", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_XAdvance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_YAdvance", ty: "float_t", modifiers: "", def_value: None }]
  constexpr GlyphValueRecord(float_t m_XPlacement, float_t m_YPlacement, float_t m_XAdvance, float_t m_YAdvance) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18187 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_XPlacement, offset: 0x0, size: 0x4, def value: None
  float_t m_XPlacement;

  /// @brief Field m_YPlacement, offset: 0x4, size: 0x4, def value: None
  float_t m_YPlacement;

  /// @brief Field m_XAdvance, offset: 0x8, size: 0x4, def value: None
  float_t m_XAdvance;

  /// @brief Field m_YAdvance, offset: 0xc, size: 0x4, def value: None
  float_t m_YAdvance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphValueRecord, m_XPlacement) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphValueRecord, m_YPlacement) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphValueRecord, m_XAdvance) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::LowLevel::GlyphValueRecord, m_YAdvance) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::GlyphValueRecord, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphValueRecord, "UnityEngine.TextCore.LowLevel", "GlyphValueRecord");

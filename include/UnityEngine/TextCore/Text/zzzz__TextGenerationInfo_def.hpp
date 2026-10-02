#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextGenerationInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextGenerationInfo)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextGenerationInfo;
}
// Write type traits
MARK_REF_T(::UnityEngine::TextCore::Text::TextGenerationInfo*);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::Text::TextGenerationInfo*, "UnityEngine.TextCore.Text", "TextGenerationInfo");
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
// Dependencies System.Object
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: UnityEngine.TextCore.Text.TextGenerationInfo
class CORDL_TYPE TextGenerationInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field <CurrentGenerationIteration>k__BackingField, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__CurrentGenerationIteration_k__BackingField, put = setStaticF__CurrentGenerationIteration_k__BackingField)) int32_t _CurrentGenerationIteration_k__BackingField;

  /// [ThreadSafe]
  /// @brief Method Create, addr 0x705fa54, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Create(bool isPermanent);

  /// [ThreadSafe]
  /// @brief Method Destroy, addr 0x705fa90, size 0x3c, virtual false, abstract: false, final false
  static inline void Destroy(::System::IntPtr ptr);

  /// @brief Method DestroyAllTempAllocations, addr 0x705fb78, size 0x28, virtual false, abstract: false, final false
  static inline void DestroyAllTempAllocations();

  /// @brief Method OnRepaintEnd, addr 0x705facc, size 0xac, virtual false, abstract: false, final false
  static inline void OnRepaintEnd();

  static inline int32_t getStaticF__CurrentGenerationIteration_k__BackingField();

  /// [CompilerGenerated]
  /// @brief Method get_CurrentGenerationIteration, addr 0x705f9b8, size 0x4c, virtual false, abstract: false, final false
  static inline int32_t get_CurrentGenerationIteration();

  static inline void setStaticF__CurrentGenerationIteration_k__BackingField(int32_t value);

  /// [CompilerGenerated]
  /// @brief Method set_CurrentGenerationIteration, addr 0x705fa04, size 0x50, virtual false, abstract: false, final false
  static inline void set_CurrentGenerationIteration(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextGenerationInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextGenerationInfo", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextGenerationInfo(TextGenerationInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextGenerationInfo", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextGenerationInfo(TextGenerationInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17863 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::TextCore::Text::TextGenerationInfo) == 0x10, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IReadonlyCutScoreBuffer)
namespace GlobalNamespace {
class ICutScoreBufferDidChangeReceiver;
}
namespace GlobalNamespace {
class ICutScoreBufferDidFinishReceiver;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class __ScoreModel__NoteScoreDefinition;
}
// Forward declare root types
namespace GlobalNamespace {
class IReadonlyCutScoreBuffer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IReadonlyCutScoreBuffer);
// Type: ::IReadonlyCutScoreBuffer
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5314))
// CS Name: ::IReadonlyCutScoreBuffer*
class CORDL_TYPE IReadonlyCutScoreBuffer {
public:
  // Declarations
  __declspec(property(get = get_maxPossibleCutScore)) int32_t maxPossibleCutScore;

  __declspec(property(get = get_cutScore)) int32_t cutScore;

  __declspec(property(get = get_beforeCutScore)) int32_t beforeCutScore;

  __declspec(property(get = get_centerDistanceCutScore)) int32_t centerDistanceCutScore;

  __declspec(property(get = get_afterCutScore)) int32_t afterCutScore;

  __declspec(property(get = get_isFinished)) bool isFinished;

  __declspec(property(get = get_noteScoreDefinition))::GlobalNamespace::__ScoreModel__NoteScoreDefinition* noteScoreDefinition;

  __declspec(property(get = get_noteCutInfo))::GlobalNamespace::NoteCutInfo noteCutInfo;

  __declspec(property(get = get_beforeCutSwingRating)) float_t beforeCutSwingRating;

  __declspec(property(get = get_afterCutSwingRating)) float_t afterCutSwingRating;

  /// @brief Method get_maxPossibleCutScore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_maxPossibleCutScore();

  /// @brief Method get_cutScore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_cutScore();

  /// @brief Method get_beforeCutScore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_beforeCutScore();

  /// @brief Method get_centerDistanceCutScore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_centerDistanceCutScore();

  /// @brief Method get_afterCutScore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_afterCutScore();

  /// @brief Method get_isFinished, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isFinished();

  /// @brief Method get_noteScoreDefinition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::__ScoreModel__NoteScoreDefinition* get_noteScoreDefinition();

  /// @brief Method get_noteCutInfo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::NoteCutInfo get_noteCutInfo();

  /// @brief Method get_beforeCutSwingRating, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_beforeCutSwingRating();

  /// @brief Method get_afterCutSwingRating, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_afterCutSwingRating();

  /// @brief Method RegisterDidChangeReceiver, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RegisterDidChangeReceiver(::GlobalNamespace::ICutScoreBufferDidChangeReceiver* receiver);

  /// @brief Method RegisterDidFinishReceiver, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void RegisterDidFinishReceiver(::GlobalNamespace::ICutScoreBufferDidFinishReceiver* receiver);

  /// @brief Method UnregisterDidChangeReceiver, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UnregisterDidChangeReceiver(::GlobalNamespace::ICutScoreBufferDidChangeReceiver* receiver);

  /// @brief Method UnregisterDidFinishReceiver, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UnregisterDidFinishReceiver(::GlobalNamespace::ICutScoreBufferDidFinishReceiver* receiver);

  // Ctor Parameters [CppParam { name: "", ty: "IReadonlyCutScoreBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IReadonlyCutScoreBuffer(IReadonlyCutScoreBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IReadonlyCutScoreBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IReadonlyCutScoreBuffer(IReadonlyCutScoreBuffer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IReadonlyCutScoreBuffer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IReadonlyCutScoreBuffer*, "", "IReadonlyCutScoreBuffer");

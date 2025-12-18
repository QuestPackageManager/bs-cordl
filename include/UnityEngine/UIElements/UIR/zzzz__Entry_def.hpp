#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/Entry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__EntryFlags_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__EntryType_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Entry)
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class Entry;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::Entry);
// Dependencies System.Object, Unity.Collections.NativeSlice`1<T>, UnityEngine.UIElements.UIR.EntryFlags, UnityEngine.UIElements.UIR.EntryType, UnityEngine.UIElements.Vertex
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.Entry
class CORDL_TYPE Entry : public ::System::Object {
public:
  // Declarations
  /// @brief Field firstChild, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_firstChild, put = __cordl_internal_set_firstChild)) ::UnityEngine::UIElements::UIR::Entry* firstChild;

  /// @brief Field flags, offset 0x12, size 0x2
  __declspec(property(get = __cordl_internal_get_flags, put = __cordl_internal_set_flags)) ::UnityEngine::UIElements::UIR::EntryFlags flags;

  /// @brief Field fontSharpness, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_fontSharpness, put = __cordl_internal_set_fontSharpness)) float_t fontSharpness;

  /// @brief Field gradientsOwner, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_gradientsOwner, put = __cordl_internal_set_gradientsOwner)) ::UnityW<::UnityEngine::UIElements::VectorImage> gradientsOwner;

  /// @brief Field immediateCallback, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_immediateCallback, put = __cordl_internal_set_immediateCallback)) ::System::Action* immediateCallback;

  /// @brief Field indices, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_indices, put = __cordl_internal_set_indices)) ::Unity::Collections::NativeSlice_1<uint16_t> indices;

  /// @brief Field lastChild, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_lastChild, put = __cordl_internal_set_lastChild)) ::UnityEngine::UIElements::UIR::Entry* lastChild;

  /// @brief Field material, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field nextSibling, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_nextSibling, put = __cordl_internal_set_nextSibling)) ::UnityEngine::UIElements::UIR::Entry* nextSibling;

  /// @brief Field textScale, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_textScale, put = __cordl_internal_set_textScale)) float_t textScale;

  /// @brief Field texture, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_texture, put = __cordl_internal_set_texture)) ::UnityW<::UnityEngine::Texture> texture;

  /// @brief Field type, offset 0x10, size 0x2
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::UnityEngine::UIElements::UIR::EntryType type;

  /// @brief Field vertices, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_vertices, put = __cordl_internal_set_vertices)) ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices;

  static inline ::UnityEngine::UIElements::UIR::Entry* New_ctor();

  /// @brief Method Reset, addr 0x6b0dc08, size 0x1c, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::UnityEngine::UIElements::UIR::Entry* const& __cordl_internal_get_firstChild() const;

  constexpr ::UnityEngine::UIElements::UIR::Entry*& __cordl_internal_get_firstChild();

  constexpr ::UnityEngine::UIElements::UIR::EntryFlags const& __cordl_internal_get_flags() const;

  constexpr ::UnityEngine::UIElements::UIR::EntryFlags& __cordl_internal_get_flags();

  constexpr float_t const& __cordl_internal_get_fontSharpness() const;

  constexpr float_t& __cordl_internal_get_fontSharpness();

  constexpr ::UnityW<::UnityEngine::UIElements::VectorImage> const& __cordl_internal_get_gradientsOwner() const;

  constexpr ::UnityW<::UnityEngine::UIElements::VectorImage>& __cordl_internal_get_gradientsOwner();

  constexpr ::System::Action* const& __cordl_internal_get_immediateCallback() const;

  constexpr ::System::Action*& __cordl_internal_get_immediateCallback();

  constexpr ::Unity::Collections::NativeSlice_1<uint16_t> const& __cordl_internal_get_indices() const;

  constexpr ::Unity::Collections::NativeSlice_1<uint16_t>& __cordl_internal_get_indices();

  constexpr ::UnityEngine::UIElements::UIR::Entry* const& __cordl_internal_get_lastChild() const;

  constexpr ::UnityEngine::UIElements::UIR::Entry*& __cordl_internal_get_lastChild();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::UIElements::UIR::Entry* const& __cordl_internal_get_nextSibling() const;

  constexpr ::UnityEngine::UIElements::UIR::Entry*& __cordl_internal_get_nextSibling();

  constexpr float_t const& __cordl_internal_get_textScale() const;

  constexpr float_t& __cordl_internal_get_textScale();

  constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_texture() const;

  constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_texture();

  constexpr ::UnityEngine::UIElements::UIR::EntryType const& __cordl_internal_get_type() const;

  constexpr ::UnityEngine::UIElements::UIR::EntryType& __cordl_internal_get_type();

  constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> const& __cordl_internal_get_vertices() const;

  constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>& __cordl_internal_get_vertices();

  constexpr void __cordl_internal_set_firstChild(::UnityEngine::UIElements::UIR::Entry* value);

  constexpr void __cordl_internal_set_flags(::UnityEngine::UIElements::UIR::EntryFlags value);

  constexpr void __cordl_internal_set_fontSharpness(float_t value);

  constexpr void __cordl_internal_set_gradientsOwner(::UnityW<::UnityEngine::UIElements::VectorImage> value);

  constexpr void __cordl_internal_set_immediateCallback(::System::Action* value);

  constexpr void __cordl_internal_set_indices(::Unity::Collections::NativeSlice_1<uint16_t> value);

  constexpr void __cordl_internal_set_lastChild(::UnityEngine::UIElements::UIR::Entry* value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_nextSibling(::UnityEngine::UIElements::UIR::Entry* value);

  constexpr void __cordl_internal_set_textScale(float_t value);

  constexpr void __cordl_internal_set_texture(::UnityW<::UnityEngine::Texture> value);

  constexpr void __cordl_internal_set_type(::UnityEngine::UIElements::UIR::EntryType value);

  constexpr void __cordl_internal_set_vertices(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> value);

  /// @brief Method .ctor, addr 0x6b0dbdc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Entry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Entry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Entry(Entry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Entry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Entry(Entry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5295 };

  /// @brief Field type, offset: 0x10, size: 0x2, def value: None
  ::UnityEngine::UIElements::UIR::EntryType ___type;

  /// @brief Field flags, offset: 0x12, size: 0x2, def value: None
  ::UnityEngine::UIElements::UIR::EntryFlags ___flags;

  /// @brief Field vertices, offset: 0x18, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> ___vertices;

  /// @brief Field indices, offset: 0x28, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<uint16_t> ___indices;

  /// @brief Field texture, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> ___texture;

  /// @brief Field textScale, offset: 0x40, size: 0x4, def value: None
  float_t ___textScale;

  /// @brief Field fontSharpness, offset: 0x44, size: 0x4, def value: None
  float_t ___fontSharpness;

  /// @brief Field gradientsOwner, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VectorImage> ___gradientsOwner;

  /// @brief Field material, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field immediateCallback, offset: 0x58, size: 0x8, def value: None
  ::System::Action* ___immediateCallback;

  /// @brief Field nextSibling, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Entry* ___nextSibling;

  /// @brief Field firstChild, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Entry* ___firstChild;

  /// @brief Field lastChild, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Entry* ___lastChild;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::Entry, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Entry, ___flags) == 0x12, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Entry, ___vertices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Entry, ___indices) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Entry, ___texture) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Entry, ___textScale) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Entry, ___fontSharpness) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Entry, ___gradientsOwner) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Entry, ___material) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Entry, ___immediateCallback) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Entry, ___nextSibling) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Entry, ___firstChild) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::Entry, ___lastChild) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Entry, 0x78>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Entry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Entry*, "UnityEngine.UIElements.UIR", "Entry");

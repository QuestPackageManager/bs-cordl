#ifdef __cpp_modules
module;
#endif

#pragma once
#include "System/Collections/ArrayList.hpp"
#include "System/Collections/ArrayList_IListWrapper.hpp"
#include "System/Collections/ArrayList_ReadOnlyArrayList.hpp"
#include "System/Collections/BitArray.hpp"
#include "System/Collections/CaseInsensitiveComparer.hpp"
#include "System/Collections/CaseInsensitiveHashCodeProvider.hpp"
#include "System/Collections/CollectionBase.hpp"
#include "System/Collections/Comparer.hpp"
#include "System/Collections/CompatibleComparer.hpp"
#include "System/Collections/DictionaryEntry.hpp"
#include "System/Collections/HashHelpers.hpp"
#include "System/Collections/Hashtable.hpp"
#include "System/Collections/HashtableExtensions.hpp"
#include "System/Collections/Hashtable_SyncHashtable.hpp"
#include "System/Collections/ICollection.hpp"
#include "System/Collections/IComparer.hpp"
#include "System/Collections/IDictionary.hpp"
#include "System/Collections/IDictionaryEnumerator.hpp"
#include "System/Collections/IEnumerable.hpp"
#include "System/Collections/IEnumerator.hpp"
#include "System/Collections/IEqualityComparer.hpp"
#include "System/Collections/IHashCodeProvider.hpp"
#include "System/Collections/IList.hpp"
#include "System/Collections/IStructuralComparable.hpp"
#include "System/Collections/IStructuralEquatable.hpp"
#include "System/Collections/ListDictionaryInternal.hpp"
#include "System/Collections/Queue.hpp"
#include "System/Collections/ReadOnlyCollectionBase.hpp"
#include "System/Collections/SortedList.hpp"
#include "System/Collections/SortedList_SyncSortedList.hpp"
#include "System/Collections/Stack.hpp"
#ifdef __cpp_modules
export module Collections;
#endif

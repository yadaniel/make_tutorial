IMAGES = bilder/*.jpg
MD5SUMS = $(patsubst %.jpg,%.md5,$(wildcard $(IMAGES)))
#MD5SUMS = $(patsubst %.jpg,%.md5,$(wildcard bilder/*.jpg))

.phony: convert clean show

%.md5: %.jpg
	md5sum $< > $@

show:
	@echo $(IMAGES)
	@echo $(MD5SUMS)

convert: $(MD5SUMS)
	echo "converting" $<

clean:
	rm $(MD5SUMS)



